package com.rusefi.io;

import com.opensr5.Logger;
import com.opensr5.io.DataListener;
import com.opensr5.io.WriteStream;
import com.rusefi.binaryprotocol.BinaryProtocol;
import com.rusefi.binaryprotocol.IncomingDataBuffer;
import com.rusefi.binaryprotocol.IoHelper;
import com.rusefi.io.tcp.BinaryProtocolServer;
import org.jetbrains.annotations.NotNull;

import java.io.EOFException;
import java.io.IOException;

/**
 * Physical bi-directional controller communication level
 * <p>
 * Andrey Belomutskiy, (c) 2013-2020
 * <p>
 * 5/11/2015.
 */
public interface IoStream extends WriteStream {

    static String printHexBinary(byte[] data) {
        char[] hexCode = "0123456789ABCDEF".toCharArray();

        StringBuilder r = new StringBuilder(data.length * 2);
        for (byte b : data) {
            r.append(hexCode[(b >> 4) & 0xF]);
            r.append(hexCode[(b & 0xF)]);
            r.append(' ');
        }
        return r.toString();
    }

    @NotNull
    default BinaryProtocolServer.Packet readPacket() throws IOException {
        short length = readShort();
        return BinaryProtocolServer.readPromisedBytes(getDataBuffer(), length);
    }

    default void sendPacket(BinaryProtocolServer.Packet packet) throws IOException {
        writeShort(packet.getPacket().length);
        write(packet.getPacket());
        writeInt(packet.getCrc());
    }

    default void sendPacket(byte[] plainPacket, Logger logger) throws IOException {
        byte[] packet;
        if (BinaryProtocol.PLAIN_PROTOCOL) {
            packet = plainPacket;
        } else {
            packet = IoHelper.makeCrc32Packet(plainPacket);
        }
        logger.info("Sending packet " + printHexBinary(plainPacket));
        write(packet);
    }

    /**
     * @param listener would be invoked from unknown implementation-dependent thread
     */
    void setInputListener(DataListener listener);

    boolean isClosed();

    void close();

    IncomingDataBuffer getDataBuffer();

    default short readShort() throws EOFException {
        return getDataBuffer().readShort();
    }
}
