//
// was generated automatically by rusEFI tool config_definition.jar based on hellen_cypress_gen_config.bat integration/rusefi_config.txt
//

#define adc_channel_e_enum "Disabled", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PB0", "PB1", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5"
#define adc_channel_e_fullenum "Disabled", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PB0", "PB1", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5"
#define ADC_CHANNEL_NONE 0
#define afr_sensor_s_size 20
#define AFTERSTART_DECAY_CURVE_SIZE 8
#define AFTERSTART_ENRICH_CURVE_SIZE 8
#define AFTERSTART_HOLD_CURVE_SIZE 8
#define air_pressure_sensor_config_s_size 12
#define air_pressure_sensor_type_e_auto_enum 0="MT_CUSTOM",10="MT_BOSCH_2_5",1="MT_DENSO183",4="MT_DODGE_NEON_2003",13="MT_GM_1_BAR",12="MT_GM_2_BAR",6="MT_GM_3_BAR",3="MT_HONDA3BAR",11="MT_MAZDA_1_BAR",7="MT_MPX4100",2="MT_MPX4250",9="MT_MPX4250A",15="MT_MPXH6300",14="MT_MPXH6400",5="MT_SUBY_DENSO",8="MT_TOYOTA_89420_02010"
#define air_pressure_sensor_type_e_MT_BOSCH_2_5 10
#define air_pressure_sensor_type_e_MT_CUSTOM 0
#define air_pressure_sensor_type_e_MT_DENSO183 1
#define air_pressure_sensor_type_e_MT_DODGE_NEON_2003 4
#define air_pressure_sensor_type_e_MT_GM_1_BAR 13
#define air_pressure_sensor_type_e_MT_GM_2_BAR 12
#define air_pressure_sensor_type_e_MT_GM_3_BAR 6
#define air_pressure_sensor_type_e_MT_HONDA3BAR 3
#define air_pressure_sensor_type_e_MT_MAZDA_1_BAR 11
#define air_pressure_sensor_type_e_MT_MPX4100 7
#define air_pressure_sensor_type_e_MT_MPX4250 2
#define air_pressure_sensor_type_e_MT_MPX4250A 9
#define air_pressure_sensor_type_e_MT_MPXH6300 15
#define air_pressure_sensor_type_e_MT_MPXH6400 14
#define air_pressure_sensor_type_e_MT_SUBY_DENSO 5
#define air_pressure_sensor_type_e_MT_TOYOTA_89420_02010 8
#define antiLagActivationMode_e_ALWAYS_ON_ANTILAG 1
#define antiLagActivationMode_e_auto_enum 0="SWITCH_INPUT_ANTILAG",1="ALWAYS_ON_ANTILAG"
#define antiLagActivationMode_e_enum "Switch Input", "Always Active"
#define antiLagActivationMode_e_SWITCH_INPUT_ANTILAG 0
#define AUX_DIGITAL_VALVE_COUNT 2
#define AUX_SPEED_SENSOR_COUNT 2
#define BANKS_COUNT 2
#define BARO_CORR_SIZE 4
#define BENCH_AC_RELAY_DURATION 800
#define BENCH_FAN_DURATION 2000
#define BENCH_FUEL_PUMP_DURATION 3000
#define BENCH_MAIN_RELAY_DURATION 1000
#define bench_mode_e_BENCH_AC_COMPRESSOR_RELAY 6
#define bench_mode_e_BENCH_AUXOUT0 20
#define bench_mode_e_BENCH_AUXOUT1 21
#define bench_mode_e_BENCH_AUXOUT2 22
#define bench_mode_e_BENCH_AUXOUT3 23
#define bench_mode_e_BENCH_AUXOUT4 24
#define bench_mode_e_BENCH_AUXOUT5 25
#define bench_mode_e_BENCH_AUXOUT6 26
#define bench_mode_e_BENCH_AUXOUT7 27
#define bench_mode_e_BENCH_CANCEL 15
#define bench_mode_e_BENCH_CHECK_ENGINE_LIGHT 7
#define bench_mode_e_BENCH_FAN_RELAY 4
#define bench_mode_e_BENCH_FAN_RELAY_2 5
#define bench_mode_e_BENCH_FUEL_PUMP 1
#define bench_mode_e_BENCH_GPPWM1_VALVE 10
#define bench_mode_e_BENCH_GPPWM2_VALVE 11
#define bench_mode_e_BENCH_GPPWM3_VALVE 12
#define bench_mode_e_BENCH_GPPWM4_VALVE 13
#define bench_mode_e_BENCH_HPFP_VALVE 9
#define bench_mode_e_BENCH_IDLE_VALVE 8
#define bench_mode_e_BENCH_MAIN_RELAY 0
#define bench_mode_e_BENCH_SECOND_IDLE_VALVE 14
#define bench_mode_e_BENCH_STARTER_DISABLE_RELAY 3
#define bench_mode_e_BENCH_STARTER_ENABLE_RELAY 2
#define bench_mode_e_BENCH_VVT0_VALVE 16
#define bench_mode_e_BENCH_VVT1_VALVE 17
#define bench_mode_e_BENCH_VVT2_VALVE 18
#define bench_mode_e_BENCH_VVT3_VALVE 19
#define bench_mode_e_HD_ACR 28
#define bench_mode_e_HD_ACR2 29
#define BENCH_STARTER_DURATION 4000
#define BENCH_VVT_DURATION 300
#define blend_table_s_size 188
#define BLOCKING_FACTOR 750
#define BOOST_BLEND_COUNT 2
#define BOOST_LOAD_COUNT 8
#define BOOST_RPM_COUNT 8
#define boostType_e_auto_enum 0="OPEN_LOOP",1="CLOSED_LOOP"
#define boostType_e_CLOSED_LOOP 1
#define boostType_e_OPEN_LOOP 0
#define brain_input_pin_e_enum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15"
#define brain_input_pin_e_fullenum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15"
#define brain_pin_diag_e_PIN_DRIVER_OFF 0x20
#define brain_pin_diag_e_PIN_DRIVER_OVERTEMP 0x10
#define brain_pin_diag_e_PIN_INVALID 0x80
#define brain_pin_diag_e_PIN_OK 0
#define brain_pin_diag_e_PIN_OPEN 0x01
#define brain_pin_diag_e_PIN_OVERLOAD 0x08
#define brain_pin_diag_e_PIN_SHORT_TO_BAT 0x04
#define brain_pin_diag_e_PIN_SHORT_TO_GND 0x02
#define C_MC33810_COUNT 1
#define CAM_INPUTS_COUNT 4
#define CAMS_PER_BANK 2
#define can_baudrate_e_auto_enum 0="B50KBPS",2="B100KBPS",3="B125KBPS",6="B1MBPS",4="B250KBPS",5="B500KBPS",1="B83KBPS"
#define can_baudrate_e_B100KBPS 2
#define can_baudrate_e_B125KBPS 3
#define can_baudrate_e_B1MBPS 6
#define can_baudrate_e_B250KBPS 4
#define can_baudrate_e_B500KBPS 5
#define can_baudrate_e_B50KBPS 0
#define can_baudrate_e_B83KBPS 1
#define can_baudrate_e_enum "50kbps", "83.33kbps", "100kbps", "125kbps", "250kbps", "500kbps", "1Mbps"
#define CAN_BENCH_HEADER2 0x66
#define CAN_DEFAULT_BASE 0x200
#define CAN_ECU_SERIAL_RX_ID 0x100
#define CAN_ECU_SERIAL_TX_ID 0x102
#define can_nbc_e_auto_enum 0="CAN_BUS_NBC_NONE",12="CAN_AIM_DASH",4="CAN_BUS_BMW_E46",6="CAN_BUS_BMW_E90",10="CAN_BUS_GENESIS_COUPE",11="CAN_BUS_HONDA_K",7="CAN_BUS_Haltech",3="CAN_BUS_MAZDA_RX8",8="CAN_BUS_MQB",13="CAN_BUS_MS_SIMPLE_BROADCAST",1="CAN_BUS_NBC_FIAT",2="CAN_BUS_NBC_VAG",9="CAN_BUS_NISSAN_VQ",5="CAN_BUS_W202_C180"
#define can_nbc_e_CAN_AIM_DASH 12
#define can_nbc_e_CAN_BUS_BMW_E46 4
#define can_nbc_e_CAN_BUS_BMW_E90 6
#define can_nbc_e_CAN_BUS_GENESIS_COUPE 10
#define can_nbc_e_CAN_BUS_Haltech 7
#define can_nbc_e_CAN_BUS_HONDA_K 11
#define can_nbc_e_CAN_BUS_MAZDA_RX8 3
#define can_nbc_e_CAN_BUS_MQB 8
#define can_nbc_e_CAN_BUS_MS_SIMPLE_BROADCAST 13
#define can_nbc_e_CAN_BUS_NBC_FIAT 1
#define can_nbc_e_CAN_BUS_NBC_NONE 0
#define can_nbc_e_CAN_BUS_NBC_VAG 2
#define can_nbc_e_CAN_BUS_NISSAN_VQ 9
#define can_nbc_e_CAN_BUS_W202_C180 5
#define CAN_RX_PREFIX "CAN_rx"
#define can_vss_nbc_e_auto_enum 0="BMW_e46",2="BMW_e90",5="HONDA_CIVIC9",4="HYUNDAI_PB",3="NISSAN_350",1="W202"
#define can_vss_nbc_e_BMW_e46 0
#define can_vss_nbc_e_BMW_e90 2
#define can_vss_nbc_e_HONDA_CIVIC9 5
#define can_vss_nbc_e_HYUNDAI_PB 4
#define can_vss_nbc_e_NISSAN_350 3
#define can_vss_nbc_e_W202 1
#define CanGpioType_auto_enum 0="NONE",1="DRT",2="MS"
#define CanGpioType_DRT 1
#define CanGpioType_enum "None", "DRT protocol", "MS protocol"
#define CanGpioType_MS 2
#define CanGpioType_NONE 0
#define CLT_CRANKING_CURVE_SIZE 8
#define CLT_CURVE_SIZE 16
#define CLT_LIMITER_CURVE_SIZE 4
#define CLT_TIMING_CURVE_SIZE 8
#define CMD_AC_RELAY_BENCH "acrelaybench"
#define CMD_ALTERNATOR_PIN "set_alternator_pin"
#define CMD_BOOST_PIN "set_boost_pin"
#define CMD_BURNCONFIG "burnconfig"
#define CMD_DATE "date"
#define CMD_DISABLE "disable"
#define CMD_ECU_UNLOCK "unlock"
#define CMD_ENABLE "enable"
#define CMD_ENGINE_TYPE "engine_type"
#define CMD_ENGINESNIFFERRPMTHRESHOLD "engineSnifferRpmThreshold"
#define CMD_ETB_DUTY "set_etb_duty"
#define CMD_EXTERNAL_STIMULATION "ext_stimulation"
#define CMD_FAN2_BENCH "fan2bench"
#define CMD_FAN_BENCH "fanbench"
#define CMD_FUEL_BENCH "fuelbench"
#define CMD_FUEL_PUMP_BENCH "fuelpumpbench"
#define CMD_FUNCTIONAL_TEST_MODE "test_mode"
#define CMD_GET "get"
#define CMD_HPFP_BENCH "hpfpbench"
#define CMD_IDLE_BENCH "idlebench"
#define CMD_IDLE_PIN "set_idle_pin"
#define CMD_IGNITION "ignition"
#define CMD_IGNITION_PIN "set_ignition_pin"
#define CMD_INDIVIDUAL_INJECTION "set_individual_coils_ignition"
#define CMD_INJECTION "injection"
#define CMD_INJECTION_PIN "set_injection_pin"
#define CMD_LOGIC_PIN "set_logic_input_pin"
#define CMD_MIL_BENCH "milbench"
#define CMD_PINS "pins"
#define CMD_PWM "pwm"
#define CMD_REBOOT "reboot"
#define CMD_REBOOT_DFU "reboot_dfu"
#define CMD_REBOOT_OPENBLT "reboot_openblt"
#define CMD_RESET_ENGINE_SNIFFER "reset_engine_chart"
#define CMD_RESET_SENSOR_MOCKS "reset_sensor_mocks"
#define CMD_RESET_SIMULATOR "reset_simulator"
#define CMD_RPM "rpm"
#define CMD_SELF_STIMULATION "self_stimulation"
#define CMD_SET "set"
#define CMD_SET_SENSOR_MOCK "set_sensor_mock"
#define CMD_SPARK_BENCH "sparkbench"
#define CMD_STARTER_BENCH "starterbench"
#define CMD_TRIGGER_HW_INPUT "trigger_hw_input"
#define CMD_TRIGGER_PIN "set_trigger_input_pin"
#define CMD_TRIGGER_SIMULATOR_PIN "set_trigger_simulator_pin"
#define CMD_TRIGGERINFO "triggerinfo"
#define CMD_VSS_PIN "vss_pin"
#define CMD_WRITECONFIG "writeconfig"
#define COMPOSITE_PACKET_SIZE 5
#define CONSOLE_DATA_PROTOCOL_TAG " @"
#define CRANKING_ADVANCE_CURVE_SIZE 4
#define CRANKING_CLT_IDLE_CURVE_SIZE 8
#define CRANKING_CURVE_SIZE 8
#define CRANKING_ENRICH_COUNT 6
#define cranking_parameters_s_size 8
#define CRITICAL_BUFFER_SIZE 120
#define CRITICAL_PREFIX "CRITICAL"
#define cyl_trim_s_size 16
#define DAC_OUTPUT_COUNT 2
#define dc_function_e_auto_enum 0="DC_None",3="DC_IdleValve",1="DC_Throttle1",2="DC_Throttle2",4="DC_Wastegate"
#define dc_function_e_DC_IdleValve 3
#define dc_function_e_DC_None 0
#define dc_function_e_DC_Throttle1 1
#define dc_function_e_DC_Throttle2 2
#define dc_function_e_DC_Wastegate 4
#define dc_io_size 8
#define DC_PER_STEPPER 2
#define debug_mode_e_auto_enum 0="DBG_0",10="DBG_10",11="DBG_11",12="DBG_12",13="DBG_13",16="DBG_16",19="DBG_19",2="DBG_2",20="DBG_20",21="DBG_21",22="DBG_22",24="DBG_24",25="DBG_25",26="DBG_26",29="DBG_29",32="DBG_32",34="DBG_34",35="DBG_35",36="DBG_36",37="DBG_37",38="DBG_38",43="DBG_43",46="DBG_46",5="DBG_5",6="DBG_6",7="DBG_7",8="DBG_8",9="DBG_9",40="DBG_COMPOSITE_LOG",33="DBG_DWELL_METRIC",44="DBG_DYNO_VIEW",17="DBG_ELECTRONIC_THROTTLE_PID",4="DBG_EL_ACCEL",39="DBG_ETB_AUTOTUNE",18="DBG_EXECUTOR",30="DBG_ION",15="DBG_KNOCK",45="DBG_LOGIC_ANALYZER",48="DBG_LUA",27="DBG_MAP",28="DBG_METRICS",14="DBG_SR5_PROTOCOL",3="DBG_STEPPER_IDLE_CONTROL",47="DBG_TCU",31="DBG_TLE8888",1="DBG_TPS_ACCEL",41="DBG_UNUSED41",42="DBG_UNUSED_42",23="UNUSED23"
#define debug_mode_e_DBG_0 0
#define debug_mode_e_DBG_10 10
#define debug_mode_e_DBG_11 11
#define debug_mode_e_DBG_12 12
#define debug_mode_e_DBG_13 13
#define debug_mode_e_DBG_16 16
#define debug_mode_e_DBG_19 19
#define debug_mode_e_DBG_2 2
#define debug_mode_e_DBG_20 20
#define debug_mode_e_DBG_21 21
#define debug_mode_e_DBG_22 22
#define debug_mode_e_DBG_24 24
#define debug_mode_e_DBG_25 25
#define debug_mode_e_DBG_26 26
#define debug_mode_e_DBG_29 29
#define debug_mode_e_DBG_32 32
#define debug_mode_e_DBG_34 34
#define debug_mode_e_DBG_35 35
#define debug_mode_e_DBG_36 36
#define debug_mode_e_DBG_37 37
#define debug_mode_e_DBG_38 38
#define debug_mode_e_DBG_43 43
#define debug_mode_e_DBG_46 46
#define debug_mode_e_DBG_5 5
#define debug_mode_e_DBG_6 6
#define debug_mode_e_DBG_7 7
#define debug_mode_e_DBG_8 8
#define debug_mode_e_DBG_9 9
#define debug_mode_e_DBG_COMPOSITE_LOG 40
#define debug_mode_e_DBG_DWELL_METRIC 33
#define debug_mode_e_DBG_DYNO_VIEW 44
#define debug_mode_e_DBG_EL_ACCEL 4
#define debug_mode_e_DBG_ELECTRONIC_THROTTLE_PID 17
#define debug_mode_e_DBG_ETB_AUTOTUNE 39
#define debug_mode_e_DBG_EXECUTOR 18
#define debug_mode_e_DBG_ION 30
#define debug_mode_e_DBG_KNOCK 15
#define debug_mode_e_DBG_LOGIC_ANALYZER 45
#define debug_mode_e_DBG_LUA 48
#define debug_mode_e_DBG_MAP 27
#define debug_mode_e_DBG_METRICS 28
#define debug_mode_e_DBG_SR5_PROTOCOL 14
#define debug_mode_e_DBG_STEPPER_IDLE_CONTROL 3
#define debug_mode_e_DBG_TCU 47
#define debug_mode_e_DBG_TLE8888 31
#define debug_mode_e_DBG_TPS_ACCEL 1
#define debug_mode_e_DBG_UNUSED41 41
#define debug_mode_e_DBG_UNUSED_42 42
#define debug_mode_e_enum "INVALID", "TPS acceleration enrichment", "INVALID", "Stepper Idle Control", "Engine Load accl enrich", "Trigger Counters", "Soft Spark Cut", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "SD card", "sr5", "Knock", "INVALID", "Electronic Throttle", "Executor", "Bench Test / TS commands", "INVALID", "Analog inputs #1", "INSTANT_RPM", "INVALID", "Status", "INVALID", "INVALID", "MAP", "Metrics", "INVALID", "Ion Sense", "TLE8888", "Analog inputs #2", "Dwell Metric", "INVALID", "INVALID", "Boost Control", "INVALID", "INVALID", "ETB Autotune", "Composite Log", "INVALID", "INVALID", "INVALID", "Dyno_View", "Logic_Analyzer", "INVALID", "TCU", "Lua"
#define debug_mode_e_UNUSED23 23
#define DEFAULT_SELT_STIM_RPM 1200
#define DEFAULT_SELT_STIM_VVT0 23
#define DEFAULT_SOLENOID_FREQUENCY 300
#define DIGIPOT_COUNT 4
#define display_mode_e_DM_HD44780 1
#define display_mode_e_DM_HD44780_OVER_PCF8574 2
#define display_mode_e_DM_NONE 0
#define DWELL_CURVE_SIZE 8
#define ego_sensor_e_auto_enum 0="ES_BPSX_D1",2="ES_14Point7_Free",6="ES_AEM",5="ES_Custom",1="ES_Innovate_MTX_L",4="ES_PLX"
#define ego_sensor_e_enum "BPSX", "Innovate", "14Point7", "INVALID", "PLX", "Custom", "AEM"
#define ego_sensor_e_ES_14Point7_Free 2
#define ego_sensor_e_ES_AEM 6
#define ego_sensor_e_ES_BPSX_D1 0
#define ego_sensor_e_ES_Custom 5
#define ego_sensor_e_ES_Innovate_MTX_L 1
#define ego_sensor_e_ES_PLX 4
#define EGT_CHANNEL_COUNT 8
#define engine_configuration_s_size 4648
#define engine_load_mode_e_auto_enum 0="LM_SPEED_DENSITY",2="LM_ALPHA_N",3="LM_LUA",100="LM_MOCK",1="LM_REAL_MAF"
#define engine_load_mode_e_enum "Speed Density", "MAF Air Charge", "Alpha-N", "Lua"
#define engine_load_mode_e_LM_ALPHA_N 2
#define engine_load_mode_e_LM_LUA 3
#define engine_load_mode_e_LM_MOCK 100
#define engine_load_mode_e_LM_REAL_MAF 1
#define engine_load_mode_e_LM_SPEED_DENSITY 0
#define ENGINE_MAKE_BMW "BMW"
#define ENGINE_MAKE_GM "GM"
#define ENGINE_MAKE_HONDA "Honda"
#define ENGINE_MAKE_Hyundai "Hyundai"
#define ENGINE_MAKE_LADA "Lada"
#define ENGINE_MAKE_MAZDA "Mazda"
#define ENGINE_MAKE_MERCEDES "Mercedes"
#define ENGINE_MAKE_NISSAN "Nissan"
#define ENGINE_MAKE_SUBARU "Subaru"
#define ENGINE_MAKE_TOYOTA "Toyota"
#define ENGINE_MAKE_VAG "VAG"
#define ENGINE_NOISE_CURVE_SIZE 16
#define ENGINE_SNIFFER_UNIT_US 10
#define engine_type_e_ALPHAX_8CHAN_SBC 97
#define engine_type_e_auto_enum 0="DEFAULT_FRANKENSO",97="ALPHAX_8CHAN_SBC",24="BMW_M73_M",50="BMW_M73_MRE",51="BMW_M73_MRE_SLAVE",38="DISCOVERY_PDM",2="DODGE_NEON_1995",46="DODGE_NEON_2003_CRANK",64="DODGE_RAM",61="EEPROM_BENCH_ENGINE",58="ETB_BENCH_ENGINE",35="ET_UNUSED_35",55="ET_UNUSED_55",56="ET_UNUSED_56",105="FERRARI_F136",3="FORD_ASPIRE_1996",11="FORD_COYOTE",14="FORD_ESCORT_GT",7="FORD_INLINE_6_1995",40="FRANKENSO_BMW_M73_F",47="FRANKENSO_MAZDA_MIATA_2003",41="FRANKENSO_MIATA_NA6_MAP",49="FRANKENSO_QA_ENGINE",59="FRANKENSO_TEST_33810",15="FUEL_BENCH",8="GY6_139QMB",6="HARLEY",84="HELLEN_121_NISSAN_4_CYL",72="HELLEN_121_NISSAN_6_CYL",85="HELLEN_121_NISSAN_8_CYL",87="HELLEN_121_NISSAN_ALMERA_N16",71="HELLEN_121_VAG_4_CYL",77="HELLEN_121_VAG_5_CYL",81="HELLEN_121_VAG_8_CYL",78="HELLEN_121_VAG_V6_CYL",79="HELLEN_121_VAG_VR6_CYL",36="HELLEN_128_MERCEDES_4_CYL",88="HELLEN_128_MERCEDES_6_CYL",89="HELLEN_128_MERCEDES_8_CYL",82="HELLEN_154_HYUNDAI_COUPE_BK1",95="HELLEN_154_HYUNDAI_COUPE_BK2",76="HELLEN_154_VAG",75="HELLEN_2CHAN_STIM_QC",74="HELLEN_4CHAN_STIM_QC",57="HELLEN_HONDA_BCM",34="HELLEN_NA6",80="HELLEN_NA94",83="HELLEN_NB1",94="HELLEN_NB1_36",69="HELLEN_NB2",86="HELLEN_NB2_36",43="HONDA_600",90="HONDA_K",66="HONDA_OBD1",91="HONDA_OBD2A",104="HYUNDAI_PB",60="L9779_BENCH_ENGINE",54="MAVERICK_X3",10="MAZDA_NA8_96",33="ME17_9_MISC",1="MIATA_PROTEUS_TCU",99="MINIMAL_PINS",12="MITSUBISHI_3A92",16="MITSUBISHI_4G93",31="MRE_BOARD_NEW_TEST",23="MRE_BODY_CONTROL",68="MRE_M111",4="MRE_SECONDARY_CAN",37="MRE_SUBARU_EJ18",62="MRE_VW_B6",5="NISSAN_PRIMERA",30="PROTEUS_ANALOG_PWM_TEST",63="PROTEUS_BMW_M73",9="PROTEUS_E65_6H_MAN_IN_THE_MIDDLE",27="PROTEUS_GM_LS_4",25="PROTEUS_LUA_DEMO",17="PROTEUS_M111",67="PROTEUS_MIATA_NB2",93="PROTEUS_N73",103="PROTEUS_NISSAN_VQ35",42="PROTEUS_QC_TEST_BOARD",98="PROTEUS_SBC",73="PROTEUS_STIM_QC",39="PROTEUS_VW_B6",29="SACHS",92="SIMULATOR_CONFIG",70="SUBARU_EG33",100="TEST_100",101="TEST_101",102="TEST_102",18="TEST_33816",28="TEST_CRANK_ENGINE",48="TEST_DC_WASTEGATE_DISCOVERY",26="TEST_ENGINE",45="TEST_ENGINE_VVT",52="TEST_ISSUE_366_BOTH",53="TEST_ISSUE_366_RISE",19="TEST_ROTARY",13="TOYOTA_1NZ_FE",44="TOYOTA_2JZ_GTE_VVTi",20="UNUSED_20",21="UNUSED_21",22="UNUSED_22",65="UNUSED_65",32="VW_ABA",96="WASTEGATE_PROTEUS_TEST"
#define engine_type_e_BMW_M73_M 24
#define engine_type_e_BMW_M73_MRE 50
#define engine_type_e_BMW_M73_MRE_SLAVE 51
#define engine_type_e_DEFAULT_FRANKENSO 0
#define engine_type_e_DISCOVERY_PDM 38
#define engine_type_e_DODGE_NEON_1995 2
#define engine_type_e_DODGE_NEON_2003_CRANK 46
#define engine_type_e_DODGE_RAM 64
#define engine_type_e_EEPROM_BENCH_ENGINE 61
#define engine_type_e_ET_UNUSED_35 35
#define engine_type_e_ET_UNUSED_55 55
#define engine_type_e_ET_UNUSED_56 56
#define engine_type_e_ETB_BENCH_ENGINE 58
#define engine_type_e_FERRARI_F136 105
#define engine_type_e_FORD_ASPIRE_1996 3
#define engine_type_e_FORD_COYOTE 11
#define engine_type_e_FORD_ESCORT_GT 14
#define engine_type_e_FORD_INLINE_6_1995 7
#define engine_type_e_FRANKENSO_BMW_M73_F 40
#define engine_type_e_FRANKENSO_MAZDA_MIATA_2003 47
#define engine_type_e_FRANKENSO_MIATA_NA6_MAP 41
#define engine_type_e_FRANKENSO_QA_ENGINE 49
#define engine_type_e_FRANKENSO_TEST_33810 59
#define engine_type_e_FUEL_BENCH 15
#define engine_type_e_GY6_139QMB 8
#define engine_type_e_HARLEY 6
#define engine_type_e_HELLEN_121_NISSAN_4_CYL 84
#define engine_type_e_HELLEN_121_NISSAN_6_CYL 72
#define engine_type_e_HELLEN_121_NISSAN_8_CYL 85
#define engine_type_e_HELLEN_121_NISSAN_ALMERA_N16 87
#define engine_type_e_HELLEN_121_VAG_4_CYL 71
#define engine_type_e_HELLEN_121_VAG_5_CYL 77
#define engine_type_e_HELLEN_121_VAG_8_CYL 81
#define engine_type_e_HELLEN_121_VAG_V6_CYL 78
#define engine_type_e_HELLEN_121_VAG_VR6_CYL 79
#define engine_type_e_HELLEN_128_MERCEDES_4_CYL 36
#define engine_type_e_HELLEN_128_MERCEDES_6_CYL 88
#define engine_type_e_HELLEN_128_MERCEDES_8_CYL 89
#define engine_type_e_HELLEN_154_HYUNDAI_COUPE_BK1 82
#define engine_type_e_HELLEN_154_HYUNDAI_COUPE_BK2 95
#define engine_type_e_HELLEN_154_VAG 76
#define engine_type_e_HELLEN_2CHAN_STIM_QC 75
#define engine_type_e_HELLEN_4CHAN_STIM_QC 74
#define engine_type_e_HELLEN_HONDA_BCM 57
#define engine_type_e_HELLEN_NA6 34
#define engine_type_e_HELLEN_NA94 80
#define engine_type_e_HELLEN_NB1 83
#define engine_type_e_HELLEN_NB1_36 94
#define engine_type_e_HELLEN_NB2 69
#define engine_type_e_HELLEN_NB2_36 86
#define engine_type_e_HONDA_600 43
#define engine_type_e_HONDA_K 90
#define engine_type_e_HONDA_OBD1 66
#define engine_type_e_HONDA_OBD2A 91
#define engine_type_e_HYUNDAI_PB 104
#define engine_type_e_L9779_BENCH_ENGINE 60
#define engine_type_e_MAVERICK_X3 54
#define engine_type_e_MAZDA_NA8_96 10
#define engine_type_e_ME17_9_MISC 33
#define engine_type_e_MIATA_PROTEUS_TCU 1
#define engine_type_e_MINIMAL_PINS 99
#define engine_type_e_MITSUBISHI_3A92 12
#define engine_type_e_MITSUBISHI_4G93 16
#define engine_type_e_MRE_BOARD_NEW_TEST 31
#define engine_type_e_MRE_BODY_CONTROL 23
#define engine_type_e_MRE_M111 68
#define engine_type_e_MRE_SECONDARY_CAN 4
#define engine_type_e_MRE_SUBARU_EJ18 37
#define engine_type_e_MRE_VW_B6 62
#define engine_type_e_NISSAN_PRIMERA 5
#define engine_type_e_PROTEUS_ANALOG_PWM_TEST 30
#define engine_type_e_PROTEUS_BMW_M73 63
#define engine_type_e_PROTEUS_E65_6H_MAN_IN_THE_MIDDLE 9
#define engine_type_e_PROTEUS_GM_LS_4 27
#define engine_type_e_PROTEUS_LUA_DEMO 25
#define engine_type_e_PROTEUS_M111 17
#define engine_type_e_PROTEUS_MIATA_NB2 67
#define engine_type_e_PROTEUS_N73 93
#define engine_type_e_PROTEUS_NISSAN_VQ35 103
#define engine_type_e_PROTEUS_QC_TEST_BOARD 42
#define engine_type_e_PROTEUS_SBC 98
#define engine_type_e_PROTEUS_STIM_QC 73
#define engine_type_e_PROTEUS_VW_B6 39
#define engine_type_e_SACHS 29
#define engine_type_e_SIMULATOR_CONFIG 92
#define engine_type_e_SUBARU_EG33 70
#define engine_type_e_TEST_100 100
#define engine_type_e_TEST_101 101
#define engine_type_e_TEST_102 102
#define engine_type_e_TEST_33816 18
#define engine_type_e_TEST_CRANK_ENGINE 28
#define engine_type_e_TEST_DC_WASTEGATE_DISCOVERY 48
#define engine_type_e_TEST_ENGINE 26
#define engine_type_e_TEST_ENGINE_VVT 45
#define engine_type_e_TEST_ISSUE_366_BOTH 52
#define engine_type_e_TEST_ISSUE_366_RISE 53
#define engine_type_e_TEST_ROTARY 19
#define engine_type_e_TOYOTA_1NZ_FE 13
#define engine_type_e_TOYOTA_2JZ_GTE_VVTi 44
#define engine_type_e_UNUSED_20 20
#define engine_type_e_UNUSED_21 21
#define engine_type_e_UNUSED_22 22
#define engine_type_e_UNUSED_65 65
#define engine_type_e_VW_ABA 32
#define engine_type_e_WASTEGATE_PROTEUS_TEST 96
#define engineSyncCam_enum "Intake First Bank", "Exhaust First Bank", "Intake Second Bank", "Exhaust Second Bank"
#define ETB2_TRIM_SIZE 6
#define ETB_BIAS_CURVE_LENGTH 8
#define ETB_COUNT 2
#define ETB_HW_MAX_FREQUENCY 3000
#define FLASH_DATA_VERSION 20014
#define FUEL_LEVEL_TABLE_COUNT 8
#define FUEL_LOAD_COUNT 16
#define fuel_pressure_sensor_mode_e_auto_enum 0="FPM_Absolute",2="FPM_Differential",1="FPM_Gauge"
#define fuel_pressure_sensor_mode_e_enum "Absolute", "Gauge", "Differential", "INVALID"
#define fuel_pressure_sensor_mode_e_FPM_Absolute 0
#define fuel_pressure_sensor_mode_e_FPM_Differential 2
#define fuel_pressure_sensor_mode_e_FPM_Gauge 1
#define FUEL_RPM_COUNT 16
#define GAP_TRACKING_LENGTH 18
#define GAUGE_CATEGORY_BOOST_CONTROL "Boost Control"
#define GAUGE_CATEGORY_ETB "ETB more"
#define GAUGE_CATEGORY_FUEL_MATH "Fuel: math"
#define GAUGE_CATEGORY_SYNC "Sync"
#define GAUGE_CATEGORY_TIMING "Timing"
#define GAUGE_COIL_DWELL_TIME "Ignition: coil charge time"
#define GAUGE_NAME_ACCEL_LAT "Accel: Lateral"
#define GAUGE_NAME_ACCEL_LON "Accel: Longitudinal"
#define GAUGE_NAME_ACCEL_ROLL "Acceleration: Roll"
#define GAUGE_NAME_ACCEL_VERT "Accel: Vertical"
#define GAUGE_NAME_ACCEL_YAW "Acceleration: Yaw"
#define GAUGE_NAME_ADJUSTED_TIMING "Timing: ignition"
#define GAUGE_NAME_AFR "Air/Fuel Ratio"
#define GAUGE_NAME_AFR2 "Air/Fuel Ratio 2"
#define GAUGE_NAME_AFR2_GAS_SCALE "Air/Fuel Ratio 2 (Gas Scale)"
#define GAUGE_NAME_AFR_GAS_SCALE "Air/Fuel Ratio (Gas Scale)"
#define GAUGE_NAME_AIR_FLOW_ESTIMATE "Air: Flow estimate"
#define GAUGE_NAME_AIR_FLOW_MEASURED "MAF"
#define GAUGE_NAME_AIR_FLOW_MEASURED_2 "MAF #2"
#define GAUGE_NAME_AIR_MASS "Air: Cylinder airmass"
#define GAUGE_NAME_AUX_LINEAR_1 "Aux linear #1"
#define GAUGE_NAME_AUX_LINEAR_2 "Aux linear #2"
#define GAUGE_NAME_AUX_TEMP1 "Aux temp 1"
#define GAUGE_NAME_AUX_TEMP2 "Aux temp 2"
#define GAUGE_NAME_BARO_PRESSURE "Barometric pressure"
#define GAUGE_NAME_BOOST_CLOSED_LOOP "Boost: Closed loop"
#define GAUGE_NAME_BOOST_OPEN_LOOP "Boost: Open loop"
#define GAUGE_NAME_BOOST_OUTPUT "Boost: Output"
#define GAUGE_NAME_BOOST_TARGET "Boost: Target"
#define GAUGE_NAME_CAN_READ_OK "CAN: Rx"
#define GAUGE_NAME_CAN_WRITE_ERR "CAN: Tx err"
#define GAUGE_NAME_CAN_WRITE_OK "CAN: Tx OK"
#define GAUGE_NAME_CLT "CLT"
#define GAUGE_NAME_CPU_TEMP "CPU Temperature"
#define GAUGE_NAME_CURRENT_GEAR "Current Gear"
#define GAUGE_NAME_DEBUG_F1 "debug f1"
#define GAUGE_NAME_DEBUG_F2 "debug f2: iTerm"
#define GAUGE_NAME_DEBUG_F3 "debug f3: prevError"
#define GAUGE_NAME_DEBUG_F4 "debug f4: iParam"
#define GAUGE_NAME_DEBUG_F5 "debug f5: dParam"
#define GAUGE_NAME_DEBUG_F6 "debug f6: dTerm"
#define GAUGE_NAME_DEBUG_F7 "debug f7"
#define GAUGE_NAME_DEBUG_I1 "debug i1: pParam"
#define GAUGE_NAME_DEBUG_I2 "debug i2: offset"
#define GAUGE_NAME_DEBUG_I3 "debug i3"
#define GAUGE_NAME_DEBUG_I4 "debug i4"
#define GAUGE_NAME_DEBUG_I5 "debug i5"
#define GAUGE_NAME_DESIRED_GEAR "TCU: Desired Gear"
#define GAUGE_NAME_DETECTED_GEAR "Detected Gear"
#define GAUGE_NAME_DWELL_DUTY "Ignition: coil duty cycle"
#define GAUGE_NAME_ECU_TEMPERATURE "ECU temperature"
#define GAUGE_NAME_ENGINE_CRC16 "Engine CRC16"
#define GAUGE_NAME_ETB_DUTY "ETB: Duty"
#define GAUGE_NAME_ETB_ERROR "ETB: position error"
#define GAUGE_NAME_ETB_TARGET "ETB: position target"
#define GAUGE_NAME_FLEX "Flex Ethanol %"
#define GAUGE_NAME_FUEL_BARO_CORR "Fuel: Barometric pressure mult"
#define GAUGE_NAME_FUEL_BASE "Fuel: base cycle mass"
#define GAUGE_NAME_FUEL_CHARGE_TEMP "Fuel: Estimated charge temperature"
#define GAUGE_NAME_FUEL_CLT_CORR "Fuel: CLT correction"
#define GAUGE_NAME_FUEL_CONSUMPTION "Fuel: Total consumed"
#define GAUGE_NAME_FUEL_CRANKING "Fuel: cranking"
#define GAUGE_NAME_FUEL_FLOW "Fuel: Flow rate"
#define GAUGE_NAME_FUEL_IAT_CORR "Fuel: IAT correction"
#define GAUGE_NAME_FUEL_INJ_DUTY "Fuel: injector duty cycle"
#define GAUGE_NAME_FUEL_INJ_DUTY_STAGE_2 "Fuel: injector duty cycle stage 2"
#define GAUGE_NAME_FUEL_INJECTION_TIMING "Fuel: Injection timing SOI"
#define GAUGE_NAME_FUEL_LAST_INJECTION "Fuel: Last inj pulse width"
#define GAUGE_NAME_FUEL_LAST_INJECTION_STAGE_2 "Fuel: Last inj pulse width stg 2"
#define GAUGE_NAME_FUEL_LEVEL "Fuel level"
#define GAUGE_NAME_FUEL_LOAD "Fuel: Load"
#define GAUGE_NAME_FUEL_PRESSURE_HIGH "Fuel pressure (high)"
#define GAUGE_NAME_FUEL_PRESSURE_HIGH_UNITS "bar"
#define GAUGE_NAME_FUEL_PRESSURE_LOW "Fuel pressure (low)"
#define GAUGE_NAME_FUEL_PRESSURE_LOW_UNITS "kPa"
#define GAUGE_NAME_FUEL_RUNNING "Fuel: running"
#define GAUGE_NAME_FUEL_TEMPERATURE "Fuel Temperature"
#define GAUGE_NAME_FUEL_TPS_EXTRA "Fuel: TPS AE add fuel ms"
#define GAUGE_NAME_FUEL_TPS_ROC "Fuel: TPS change"
#define GAUGE_NAME_FUEL_TRIM "Fuel: fuel trim"
#define GAUGE_NAME_FUEL_TRIM_2 "Fuel: fuel trim 2"
#define GAUGE_NAME_FUEL_VE "Fuel: VE"
#define GAUGE_NAME_FUEL_WALL_AMOUNT "Fuel: wall amount"
#define GAUGE_NAME_FUEL_WALL_CORRECTION "Fuel: wall correction"
#define GAUGE_NAME_FW_VERSION "ECU Software Version"
#define GAUGE_NAME_GEAR_RATIO "Gearbox Ratio"
#define GAUGE_NAME_GYRO_YAW "Gyro: Yaw rate"
#define GAUGE_NAME_IAC "Idle: Position"
#define GAUGE_NAME_IAT "IAT"
#define GAUGE_NAME_IDLE_POSITION "Idle: Position sensor"
#define GAUGE_NAME_IGNITION_LOAD "Ignition: load"
#define GAUGE_NAME_IGNITION_MODE "Ignition: Mode"
#define GAUGE_NAME_INJECTION_MODE "Fuel: Injection mode"
#define GAUGE_NAME_INJECTOR_LAG "Fuel: injector lag"
#define GAUGE_NAME_ISS "TCU: Input Shaft Speed"
#define GAUGE_NAME_KNOCK_1 "knock 1"
#define GAUGE_NAME_KNOCK_10 "knock 10"
#define GAUGE_NAME_KNOCK_11 "knock 11"
#define GAUGE_NAME_KNOCK_12 "knock 12"
#define GAUGE_NAME_KNOCK_2 "knock 2"
#define GAUGE_NAME_KNOCK_3 "knock 3"
#define GAUGE_NAME_KNOCK_4 "knock 4"
#define GAUGE_NAME_KNOCK_5 "knock 5"
#define GAUGE_NAME_KNOCK_6 "knock 6"
#define GAUGE_NAME_KNOCK_7 "knock 7"
#define GAUGE_NAME_KNOCK_8 "knock 8"
#define GAUGE_NAME_KNOCK_9 "knock 9"
#define GAUGE_NAME_KNOCK_COUNTER "Knock: Count"
#define GAUGE_NAME_KNOCK_LEVEL "Knock: Current level"
#define GAUGE_NAME_KNOCK_RETARD "Knock: Retard"
#define GAUGE_NAME_LAMBDA "Lambda"
#define GAUGE_NAME_LAMBDA2 "Lambda 2"
#define GAUGE_NAME_LAST_ERROR "Last error"
#define GAUGE_NAME_MAF "MAF"
#define GAUGE_NAME_MAP "MAP"
#define GAUGE_NAME_OIL_PRESSURE "Oil Pressure"
#define GAUGE_NAME_OIL_PRESSURE_UNITS "kPa"
#define GAUGE_NAME_RAW_FUEL_PRESSURE_HIGH "Fuel pressure raw (high)"
#define GAUGE_NAME_RAW_FUEL_PRESSURE_LOW "Fuel pressure raw (low)"
#define GAUGE_NAME_RPM "RPM"
#define GAUGE_NAME_TARGET_AFR "Fuel: target AFR"
#define GAUGE_NAME_TARGET_LAMBDA "Fuel: target lambda"
#define GAUGE_NAME_TC_RATIO "TCU: Torque Converter Ratio"
#define GAUGE_NAME_TCHARGE "Air: SD tCharge"
#define GAUGE_NAME_THROTTLE_PEDAL "Throttle pedal position"
#define GAUGE_NAME_TIME "Time"
#define GAUGE_NAME_TIMING_ADVANCE "Ignition: Timing"
#define GAUGE_NAME_TPS "TPS"
#define GAUGE_NAME_TPS2 "TPS2"
#define GAUGE_NAME_TRG_ERR "Trigger Error Counter"
#define GAUGE_NAME_TRG_GAP "Trigger Sync Latest Ratio"
#define GAUGE_NAME_TUNE_CRC16 "Tune CRC16"
#define GAUGE_NAME_TURBO_SPEED "Turbocharger Speed"
#define GAUGE_NAME_UPTIME "Uptime"
#define GAUGE_NAME_VBAT "VBatt"
#define GAUGE_NAME_VERSION "firmware"
#define GAUGE_NAME_VVS "Vehicle Speed"
#define GAUGE_NAME_VVT_B1E "VVT: bank 1 exhaust"
#define GAUGE_NAME_VVT_B1I "VVT: bank 1 intake"
#define GAUGE_NAME_VVT_B2E "VVT: bank 2 exhaust"
#define GAUGE_NAME_VVT_B2I "VVT: bank 2 intake"
#define GAUGE_NAME_VVT_TARGET_B1E "VVT: bank 1 exhaust target"
#define GAUGE_NAME_VVT_TARGET_B1I "VVT: bank 1 intake target"
#define GAUGE_NAME_VVT_TARGET_B2E "VVT: bank 2 exhaust target"
#define GAUGE_NAME_VVT_TARGET_B2I "VVT: bank 2 intake target"
#define GAUGE_NAME_WARNING_COUNT "Warning count"
#define GAUGE_NAME_WARNING_COUNTER "Warning: counter"
#define GAUGE_NAME_WARNING_LAST "Warning: last"
#define GAUGE_NAME_WG_POSITION "Wastegate position sensor"
#define gear_controller_e_enum "None", "Button Shift"
#define gear_e_GEAR_1 1
#define gear_e_GEAR_2 2
#define gear_e_GEAR_3 3
#define gear_e_GEAR_4 4
#define gear_e_NEUTRAL 0
#define gear_e_REVERSE -1
#define GearControllerMode_auto_enum 0="None",1="ButtonShift",2="Generic"
#define GearControllerMode_ButtonShift 1
#define GearControllerMode_Generic 2
#define GearControllerMode_None 0
#define Gpio_enum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15"
#define gppwm_channel_e_auto_enum 0="GPPWM_Zero",9="GPPWM_AccelPedal",16="GPPWM_AuxLinear1",17="GPPWM_AuxLinear2",7="GPPWM_AuxTemp1",8="GPPWM_AuxTemp2",26="GPPWM_BaroPressure",3="GPPWM_Clt",25="GPPWM_DetectedGear",15="GPPWM_EthanolPercent",5="GPPWM_FuelLoad",18="GPPWM_GppwmOutput1",19="GPPWM_GppwmOutput2",20="GPPWM_GppwmOutput3",21="GPPWM_GppwmOutput4",4="GPPWM_Iat",6="GPPWM_IgnLoad",22="GPPWM_LuaGauge1",23="GPPWM_LuaGauge2",2="GPPWM_Map",24="GPPWM_Rpm",1="GPPWM_Tps",12="GPPWM_VVT_1E",11="GPPWM_VVT_1I",14="GPPWM_VVT_2E",13="GPPWM_VVT_2I",10="GPPWM_Vbatt"
#define gppwm_channel_e_enum "Zero", "TPS", "MAP", "CLT", "IAT", "Fuel Load", "Ignition Load", "Aux Temp 1", "Aux Temp 2", "Accel Pedal", "Battery Voltage", "VVT 1 I", "VVT 1 E", "VVT 2 I", "VVT 2 E", "Ethanol (Flex) %", "Aux Linear 1", "Aux Linear 2", "GPPWM Output 1", "GPPWM Output 2", "GPPWM Output 3", "GPPWM Output 4", "Lua Gauge 1", "Lua Gauge 2", "RPM", "Gear (detected)", "Baro pressure"
#define gppwm_channel_e_GPPWM_AccelPedal 9
#define gppwm_channel_e_GPPWM_AuxLinear1 16
#define gppwm_channel_e_GPPWM_AuxLinear2 17
#define gppwm_channel_e_GPPWM_AuxTemp1 7
#define gppwm_channel_e_GPPWM_AuxTemp2 8
#define gppwm_channel_e_GPPWM_BaroPressure 26
#define gppwm_channel_e_GPPWM_Clt 3
#define gppwm_channel_e_GPPWM_DetectedGear 25
#define gppwm_channel_e_GPPWM_EthanolPercent 15
#define gppwm_channel_e_GPPWM_FuelLoad 5
#define gppwm_channel_e_GPPWM_GppwmOutput1 18
#define gppwm_channel_e_GPPWM_GppwmOutput2 19
#define gppwm_channel_e_GPPWM_GppwmOutput3 20
#define gppwm_channel_e_GPPWM_GppwmOutput4 21
#define gppwm_channel_e_GPPWM_Iat 4
#define gppwm_channel_e_GPPWM_IgnLoad 6
#define gppwm_channel_e_GPPWM_LuaGauge1 22
#define gppwm_channel_e_GPPWM_LuaGauge2 23
#define gppwm_channel_e_GPPWM_Map 2
#define gppwm_channel_e_GPPWM_Rpm 24
#define gppwm_channel_e_GPPWM_Tps 1
#define gppwm_channel_e_GPPWM_Vbatt 10
#define gppwm_channel_e_GPPWM_VVT_1E 12
#define gppwm_channel_e_GPPWM_VVT_1I 11
#define gppwm_channel_e_GPPWM_VVT_2E 14
#define gppwm_channel_e_GPPWM_VVT_2I 13
#define gppwm_channel_e_GPPWM_Zero 0
#define gppwm_channel_size 108
#define GPPWM_CHANNELS 4
#define gppwm_compare_mode_e_GPPWM_GreaterThan 0
#define gppwm_compare_mode_e_GPPWM_LessThan 1
#define GPPWM_LOAD_COUNT 8
#define GPPWM_NOTE_SIZE 16
#define GPPWM_RPM_COUNT 8
#define HIGH_SPEED_COUNT 32
#define hpfp_cam_e_auto_enum 0="HPFP_CAM_NONE",2="HPFP_CAM_EX1",4="HPFP_CAM_EX2",1="HPFP_CAM_IN1",3="HPFP_CAM_IN2"
#define hpfp_cam_e_enum "NONE", "Intake 1", "Exhaust 1", "Intake 2", "Exhaust 2"
#define hpfp_cam_e_HPFP_CAM_EX1 2
#define hpfp_cam_e_HPFP_CAM_EX2 4
#define hpfp_cam_e_HPFP_CAM_IN1 1
#define hpfp_cam_e_HPFP_CAM_IN2 3
#define hpfp_cam_e_HPFP_CAM_NONE 0
#define HPFP_COMPENSATION_SIZE 10
#define HPFP_DEADTIME_SIZE 8
#define HPFP_LOBE_PROFILE_SIZE 16
#define HPFP_TARGET_SIZE 10
#define HW_MAX_ADC_INDEX 17
#define IAC_PID_MULT_SIZE 8
#define IAT_CURVE_SIZE 16
#define IDLE_ADVANCE_CURVE_SIZE 8
#define idle_hardware_s_size 12
#define idle_mode_e_auto_enum 0="IM_AUTO",1="IM_MANUAL"
#define idle_mode_e_IM_AUTO 0
#define idle_mode_e_IM_MANUAL 1
#define idle_state_e_BLIP 64
#define idle_state_e_INIT 0
#define idle_state_e_PID_UPPER 16
#define idle_state_e_PID_VALUE 4
#define idle_state_e_RPM_DEAD_ZONE 2
#define idle_state_e_TPS_THRESHOLD 1
#define IDLE_VE_SIZE 4
#define IGN_BLEND_COUNT 4
#define IGN_LOAD_COUNT 16
#define IGN_RPM_COUNT 16
#define ignition_mode_e_auto_enum 0="IM_ONE_COIL",1="IM_INDIVIDUAL_COILS",3="IM_TWO_COILS",2="IM_WASTED_SPARK"
#define ignition_mode_e_IM_INDIVIDUAL_COILS 1
#define ignition_mode_e_IM_ONE_COIL 0
#define ignition_mode_e_IM_TWO_COILS 3
#define ignition_mode_e_IM_WASTED_SPARK 2
#define IGNITION_OUTPUT "Ignition Output"
#define imu_type_e_auto_enum 0="IMU_NONE",2="IMU_MM5_10",3="IMU_TYPE_3",4="IMU_TYPE_4",5="IMU_TYPE_MB_A0065422618",1="IMU_VAG"
#define imu_type_e_IMU_MM5_10 2
#define imu_type_e_IMU_NONE 0
#define imu_type_e_IMU_TYPE_3 3
#define imu_type_e_IMU_TYPE_4 4
#define imu_type_e_IMU_TYPE_MB_A0065422618 5
#define imu_type_e_IMU_VAG 1
#define INDICATOR_NAME_AC_SWITCH "AC switch"
#define INDICATOR_NAME_BRAKE_DOWN "Brake switch"
#define INDICATOR_NAME_CLUTCH_DOWN "Clutch: down"
#define INDICATOR_NAME_CLUTCH_UP "Clutch: up"
#define INJ_STAGING_COUNT 6
#define injection_mode_e_auto_enum 0="IM_SIMULTANEOUS",2="IM_BATCH",1="IM_SEQUENTIAL",3="IM_SINGLE_POINT"
#define injection_mode_e_IM_BATCH 2
#define injection_mode_e_IM_SEQUENTIAL 1
#define injection_mode_e_IM_SIMULTANEOUS 0
#define injection_mode_e_IM_SINGLE_POINT 3
#define InjectionTimingMode_auto_enum 0="End",2="Center",1="Start"
#define InjectionTimingMode_Center 2
#define InjectionTimingMode_End 0
#define InjectionTimingMode_Start 1
#define injector_compensation_mode_e_auto_enum 0="ICM_None",1="ICM_FixedRailPressure",2="ICM_SensedRailPressure"
#define injector_compensation_mode_e_ICM_FixedRailPressure 1
#define injector_compensation_mode_e_ICM_None 0
#define injector_compensation_mode_e_ICM_SensedRailPressure 2
#define injector_pressure_type_e_auto_enum 0="IPT_Low",1="IPT_High"
#define injector_pressure_type_e_IPT_High 1
#define injector_pressure_type_e_IPT_Low 0
#define injector_s_size 68
#define InjectorNonlinearMode_auto_enum 0="INJ_None",2="INJ_FordModel",1="INJ_PolynomialAdder"
#define InjectorNonlinearMode_INJ_FordModel 2
#define InjectorNonlinearMode_INJ_None 0
#define InjectorNonlinearMode_INJ_PolynomialAdder 1
#define launchActivationMode_e_ALWAYS_ACTIVE_LAUNCH 2
#define launchActivationMode_e_auto_enum 0="SWITCH_INPUT_LAUNCH",2="ALWAYS_ACTIVE_LAUNCH",1="CLUTCH_INPUT_LAUNCH"
#define launchActivationMode_e_CLUTCH_INPUT_LAUNCH 1
#define launchActivationMode_e_enum "Launch Button", "Clutch Down Switch", "Always Active(Disabled By Speed)"
#define launchActivationMode_e_SWITCH_INPUT_LAUNCH 0
#define linear_sensor_s_size 20
#define load_override_e_AFR_AccPedal 3
#define load_override_e_AFR_CylFilling 4
#define load_override_e_AFR_MAP 1
#define load_override_e_AFR_None 0
#define load_override_e_AFR_Tps 2
#define load_override_e_auto_enum 0="AFR_None",3="AFR_AccPedal",4="AFR_CylFilling",1="AFR_MAP",2="AFR_Tps"
#define load_override_e_enum "None", "MAP", "TPS", "Acc Pedal", "Cyl Filling %"
#define LOG_DELIMITER "`"
#define LOGIC_ANALYZER_CHANNEL_COUNT 4
#define LUA_ANALOG_INPUT_COUNT 8
#define LUA_DIGITAL_INPUT_COUNT 8
#define LUA_GAUGE_COUNT 2
#define LUA_PWM_COUNT 8
#define LUA_SCRIPT_SIZE 8000
#define MAF_DECODING_COUNT 32
#define maf_sensor_type_e_auto_enum 0="CUSTOM",2="Bosch0280218004",1="Bosch0280218037",3="DensoTODO"
#define maf_sensor_type_e_Bosch0280218004 2
#define maf_sensor_type_e_Bosch0280218037 1
#define maf_sensor_type_e_CUSTOM 0
#define maf_sensor_type_e_DensoTODO 3
#define maf_sensor_type_e_enum "v0", "v1", "v2", "v3"
#define MAIN_HELP_URL "http://www.rusefi.com/"
#define MAP_ANGLE_SIZE 8
#define MAP_sensor_config_s_size 140
#define MAP_WINDOW_SIZE 8
#define MAX_CYLINDER_COUNT 12
#define mc33810maxDwellTimer_e_auto_enum 0="DWELL_2MS",3="DWELL_16MS",4="DWELL_32MS",1="DWELL_4MS",5="DWELL_64MS",2="DWELL_8MS"
#define mc33810maxDwellTimer_e_DWELL_16MS 3
#define mc33810maxDwellTimer_e_DWELL_2MS 0
#define mc33810maxDwellTimer_e_DWELL_32MS 4
#define mc33810maxDwellTimer_e_DWELL_4MS 1
#define mc33810maxDwellTimer_e_DWELL_64MS 5
#define mc33810maxDwellTimer_e_DWELL_8MS 2
#define MLQ_FIELD_HEADER_SIZE 89
#define MLQ_HEADER_SIZE 24
#define operation_mode_e_FOUR_STROKE_CAM_SENSOR 2
#define operation_mode_e_FOUR_STROKE_CRANK_SENSOR 1
#define operation_mode_e_FOUR_STROKE_SIX_TIMES_CRANK_SENSOR 7
#define operation_mode_e_FOUR_STROKE_SYMMETRICAL_CRANK_SENSOR 4
#define operation_mode_e_FOUR_STROKE_THREE_TIMES_CRANK_SENSOR 5
#define operation_mode_e_FOUR_STROKE_TWELVE_TIMES_CRANK_SENSOR 6
#define operation_mode_e_OM_NONE 0
#define operation_mode_e_TWO_STROKE 3
#define output_pin_e_enum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15", "MC33972_1", "MC33972_2", "MC33972_3", "MC33972_4", "MC33972_5", "MC33972_6", "MC33972_7", "MC33972_8", "MC33972_9", "MC33972_10", "MC33972_11", "MC33972_12", "MC33972_13", "MC33972_14", "MC33972_15", "MC33972_16", "MC33972_17", "MC33972_18", "MC33972_19", "MC33972_20", "MC33972_21", "MC33972_22", "TLE8888_1", "TLE8888_2", "TLE8888_3", "TLE8888_4", "TLE8888_5", "TLE8888_6", "TLE8888_7", "TLE8888_8", "TLE8888_9", "TLE8888_10", "TLE8888_11", "TLE8888_12", "TLE8888_13", "TLE8888_14", "TLE8888_15", "TLE8888_16", "TLE8888_17", "TLE8888_18", "TLE8888_19", "TLE8888_20", "TLE8888_21", "TLE8888_22", "TLE8888_23", "TLE8888_24", "TLE8888_25", "TLE8888_26", "TLE8888_27", "TLE8888_28", "INVALID", "INVALID", "INVALID", "TLE6240_1", "TLE6240_2", "TLE6240_3", "TLE6240_4", "TLE6240_5", "TLE6240_6", "TLE6240_7", "TLE6240_8", "TLE6240_9", "TLE6240_10", "TLE6240_11", "TLE6240_12", "TLE6240_13", "TLE6240_14", "TLE6240_15", "TLE6240_16", "L215", "L216", "L217", "L218", "L219", "L220", "L221", "L222", "L223", "L224", "L225", "L226", "L227", "L228", "L229", "L230", "L231", "L232", "L233", "L234", "L235", "L236", "L237", "L238", "L239", "L240", "L241", "L242", "L243", "L244", "L245", "L246", "L247", "L248", "can0", "can1", "can2", "can3", "can4", "can5", "can6", "can7", "protected_0", "protected_1", "protected_2", "protected_3", "protected_4", "protected_5", "protected_6", "protected_7", "protected_8", "protected_9", "protected_10", "protected_11", "protected_12", "protected_13", "protected_14", "protected_15", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "MC33810_0_OUT_0", "MC33810_0_OUT_1", "MC33810_0_OUT_2", "MC33810_0_OUT_3", "MC33810_0_GD_0", "MC33810_0_GD_1", "MC33810_0_GD_2", "MC33810_0_GD_3"
#define output_pin_e_fullenum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15", "MC33972_1", "MC33972_2", "MC33972_3", "MC33972_4", "MC33972_5", "MC33972_6", "MC33972_7", "MC33972_8", "MC33972_9", "MC33972_10", "MC33972_11", "MC33972_12", "MC33972_13", "MC33972_14", "MC33972_15", "MC33972_16", "MC33972_17", "MC33972_18", "MC33972_19", "MC33972_20", "MC33972_21", "MC33972_22", "TLE8888_1", "TLE8888_2", "TLE8888_3", "TLE8888_4", "TLE8888_5", "TLE8888_6", "TLE8888_7", "TLE8888_8", "TLE8888_9", "TLE8888_10", "TLE8888_11", "TLE8888_12", "TLE8888_13", "TLE8888_14", "TLE8888_15", "TLE8888_16", "TLE8888_17", "TLE8888_18", "TLE8888_19", "TLE8888_20", "TLE8888_21", "TLE8888_22", "TLE8888_23", "TLE8888_24", "TLE8888_25", "TLE8888_26", "TLE8888_27", "TLE8888_28", "INVALID", "INVALID", "INVALID", "TLE6240_1", "TLE6240_2", "TLE6240_3", "TLE6240_4", "TLE6240_5", "TLE6240_6", "TLE6240_7", "TLE6240_8", "TLE6240_9", "TLE6240_10", "TLE6240_11", "TLE6240_12", "TLE6240_13", "TLE6240_14", "TLE6240_15", "TLE6240_16", "L215", "L216", "L217", "L218", "L219", "L220", "L221", "L222", "L223", "L224", "L225", "L226", "L227", "L228", "L229", "L230", "L231", "L232", "L233", "L234", "L235", "L236", "L237", "L238", "L239", "L240", "L241", "L242", "L243", "L244", "L245", "L246", "L247", "L248", "can0", "can1", "can2", "can3", "can4", "can5", "can6", "can7", "protected_0", "protected_1", "protected_2", "protected_3", "protected_4", "protected_5", "protected_6", "protected_7", "protected_8", "protected_9", "protected_10", "protected_11", "protected_12", "protected_13", "protected_14", "protected_15", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "MC33810_0_OUT_0", "MC33810_0_OUT_1", "MC33810_0_OUT_2", "MC33810_0_OUT_3", "MC33810_0_GD_0", "MC33810_0_GD_1", "MC33810_0_GD_2", "MC33810_0_GD_3"
#define PACK_ADD_TEMPERATURE 40
#define PACK_MULT_AFR 1000
#define PACK_MULT_AFR_CFG 10
#define PACK_MULT_ANGLE 50
#define PACK_MULT_FLEX 2
#define PACK_MULT_FUEL_FLOW 200
#define PACK_MULT_FUEL_MASS 100
#define PACK_MULT_HIGH_PRESSURE 10
#define PACK_MULT_LAMBDA 10000
#define PACK_MULT_LAMBDA_CFG 147
#define PACK_MULT_MASS_FLOW 10
#define PACK_MULT_MS 300
#define PACK_MULT_PERCENT 100
#define PACK_MULT_PRESSURE 30
#define PACK_MULT_TEMPERATURE 100
#define PACK_MULT_VOLTAGE 1000
#define PACK_MULT_VSS 100
#define PACK_PERCENT_BYTE_MULT 100.0
#define PEDAL_TO_TPS_SIZE 8
#define PERCENT_TRIM_BYTE_PACKING_DIV 0.02
#define persistent_config_s_size 22176
#define pid_s_size 20
#define pin_input_mode_e_auto_enum 0="PI_DEFAULT",2="PI_PULLDOWN",1="PI_PULLUP"
#define pin_input_mode_e_enum "DEFAULT", "PULLUP", "PULLDOWN"
#define pin_input_mode_e_PI_DEFAULT 0
#define pin_input_mode_e_PI_PULLDOWN 2
#define pin_input_mode_e_PI_PULLUP 1
#define pin_mode_e_enum "default", "INVALID", "INVALID", "INVALID", "opendrain", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "PULLUP", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "PULLDOWN"
#define pin_output_mode_e_auto_enum 0="OM_DEFAULT",1="OM_INVERTED",2="OM_OPENDRAIN",3="OM_OPENDRAIN_INVERTED"
#define pin_output_mode_e_enum "default", "default inverted", "open collector", "open collector inverted"
#define pin_output_mode_e_OM_DEFAULT 0
#define pin_output_mode_e_OM_INVERTED 1
#define pin_output_mode_e_OM_OPENDRAIN 2
#define pin_output_mode_e_OM_OPENDRAIN_INVERTED 3
#define PRIME_CURVE_COUNT 8
#define PROTOCOL_ACR_NAME "acr"
#define PROTOCOL_ANALOG_CHART "analog_chart"
#define PROTOCOL_COIL1_SHORT_NAME "c1"
#define PROTOCOL_CRANK1 "t1"
#define PROTOCOL_CRANK2 "t2"
#define PROTOCOL_ENGINE_SNIFFER "wave_chart"
#define PROTOCOL_ES_DOWN "d"
#define PROTOCOL_ES_UP "u"
#define PROTOCOL_HELLO_PREFIX "***"
#define PROTOCOL_HIP_NAME "HIP"
#define PROTOCOL_HPFP_NAME "hpfp"
#define PROTOCOL_INJ1_SHORT_NAME "i1"
#define PROTOCOL_INJ1_STAGE2_SHORT_NAME "j1"
#define PROTOCOL_MSG "msg"
#define PROTOCOL_OUTPIN "outpin"
#define PROTOCOL_SIGNATURE_PREFIX "rusEFI "
#define PROTOCOL_TACH_NAME "tach"
#define PROTOCOL_TEST_RESPONSE_TAG "ts_p_alive"
#define PROTOCOL_VERSION_TAG "rusEfiVersion"
#define PROTOCOL_VVT1_NAME "VVT1"
#define PROTOCOL_VVT2_NAME "VVT2"
#define PROTOCOL_VVT3_NAME "VVT3"
#define PROTOCOL_VVT4_NAME "VVT4"
#define PROTOCOL_WA_CHANNEL_1 "input1"
#define PROTOCOL_WA_CHANNEL_2 "input2"
#define PROTOCOL_WA_CHANNEL_3 "input3"
#define PROTOCOL_WA_CHANNEL_4 "input4"
#define RANGE_INPUT_COUNT 6
#define SCRIPT_CURVE_16 16
#define SCRIPT_CURVE_8 8
#define SCRIPT_CURVE_COUNT 6
#define SCRIPT_SETTING_COUNT 8
#define SCRIPT_TABLE_8 8
#define SCRIPT_TABLE_COUNT 4
#define SelectedGear_Drive 6
#define SelectedGear_Invalid 0
#define SelectedGear_Low 11
#define SelectedGear_Manual 7
#define SelectedGear_Manual1 10
#define SelectedGear_Manual2 9
#define SelectedGear_Manual3 8
#define SelectedGear_ManualMinus 2
#define SelectedGear_ManualPlus 1
#define SelectedGear_Neutral 5
#define SelectedGear_Park 3
#define SelectedGear_Reverse 4
#define sensor_chart_e_auto_enum 0="SC_OFF",5="SC_AUX_FAST1",4="SC_DETAILED_RPM",3="SC_RPM_ACCEL",1="SC_TRIGGER"
#define sensor_chart_e_enum "none", "trigger", "INVALID", "RPM ACCEL", "DETAILED RPM", "Fast Aux1"
#define sensor_chart_e_SC_AUX_FAST1 5
#define sensor_chart_e_SC_DETAILED_RPM 4
#define sensor_chart_e_SC_OFF 0
#define sensor_chart_e_SC_RPM_ACCEL 3
#define sensor_chart_e_SC_TRIGGER 1
#define SENT_INPUT_COUNT 1
#define sent_input_pin_e_enum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15"
#define SentEtbType_auto_enum 0="NONE",3="CUSTOM",2="FORD_TYPE_1",1="GM_TYPE_1"
#define SentEtbType_CUSTOM 3
#define SentEtbType_enum "None", "GM type 1", "Ford type 1", "Custom"
#define SentEtbType_FORD_TYPE_1 2
#define SentEtbType_GM_TYPE_1 1
#define SentEtbType_NONE 0
#define show_Frankenso_presets false
#define show_microRusEFI_presets false
#define show_Proteus_presets false
#define show_test_presets false
#define SIGNATURE_HASH 2575659228
#define SIMULATOR_TUNE_BIN_FILE_NAME "generated/simulator_tune_image.bin"
#define SIMULATOR_TUNE_BIN_FILE_NAME_PREFIX "generated/simulator_tune_image"
#define SIMULATOR_TUNE_BIN_FILE_NAME_SUFFIX ".bin"
#define spi_device_e_auto_enum 0="SPI_NONE",1="SPI_DEVICE_1",2="SPI_DEVICE_2",3="SPI_DEVICE_3",4="SPI_DEVICE_4"
#define spi_device_e_SPI_DEVICE_1 1
#define spi_device_e_SPI_DEVICE_2 2
#define spi_device_e_SPI_DEVICE_3 3
#define spi_device_e_SPI_DEVICE_4 4
#define spi_device_e_SPI_NONE 0
#define spi_speed_e__150KHz 3
#define spi_speed_e__1_25MHz 2
#define spi_speed_e__2_5MHz 1
#define spi_speed_e__5MHz 0
#define stepper_num_micro_steps_e_auto_enum 0="STEPPER_FULL",8="STEPPER_EIGHTH",4="STEPPER_FOURTH",2="STEPPER_HALF"
#define stepper_num_micro_steps_e_enum "Full-Step (Default)", "INVALID", "Half-Step", "INVALID", "1/4 Micro-Step", "INVALID", "INVALID", "INVALID", "1/8 Micro-Step"
#define stepper_num_micro_steps_e_STEPPER_EIGHTH 8
#define stepper_num_micro_steps_e_STEPPER_FOURTH 4
#define stepper_num_micro_steps_e_STEPPER_FULL 0
#define stepper_num_micro_steps_e_STEPPER_HALF 2
#define STFT_BANK_COUNT 2
#define stft_cell_cfg_s_size 4
#define STFT_CELL_COUNT 4
#define stft_s_size 24
#define switch_input_pin_e_enum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15"
#define switch_input_pin_e_fullenum "NONE", "INVALID", "PA0", "PA1", "PA2", "PA3", "PA4", "PA5", "PA6", "PA7", "PA8", "PA9", "PA10", "PA11", "PA12", "PA13", "PA14", "PA15", "PB0", "PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8", "PB9", "PB10", "PB11", "PB12", "PB13", "PB14", "PB15", "PC0", "PC1", "PC2", "PC3", "PC4", "PC5", "PC6", "PC7", "PC8", "PC9", "PC10", "PC11", "PC12", "PC13", "PC14", "PC15", "PD0", "PD1", "PD2", "PD3", "PD4", "PD5", "PD6", "PD7", "PD8", "PD9", "PD10", "PD11", "PD12", "PD13", "PD14", "PD15", "PE0", "PE1", "PE2", "PE3", "PE4", "PE5", "PE6", "PE7", "PE8", "PE9", "PE10", "PE11", "PE12", "PE13", "PE14", "PE15", "PF0", "PF1", "PF2", "PF3", "PF4", "PF5", "PF6", "PF7", "PF8", "PF9", "PF10", "PF11", "PF12", "PF13", "PF14", "PF15", "PG0", "PG1", "PG2", "PG3", "PG4", "PG5", "PG6", "PG7", "PG8", "PG9", "PG10", "PG11", "PG12", "PG13", "PG14", "PG15", "PH0", "PH1", "PH2", "PH3", "PH4", "PH5", "PH6", "PH7", "PH8", "PH9", "PH10", "PH11", "PH12", "PH13", "PH14", "PH15", "PI0", "PI1", "PI2", "PI3", "PI4", "PI5", "PI6", "PI7", "PI8", "PI9", "PI10", "PI11", "PI12", "PI13", "PI14", "PI15"
#define TABLE_4_RPM 10
#define tChargeMode_e_auto_enum 0="TCHARGE_MODE_RPM_TPS",1="TCHARGE_MODE_AIR_INTERP",2="TCHARGE_MODE_AIR_INTERP_TABLE"
#define tChargeMode_e_enum "RPM+TPS (Default)", "Air Mass Interpolation", "Table"
#define tChargeMode_e_TCHARGE_MODE_AIR_INTERP 1
#define tChargeMode_e_TCHARGE_MODE_AIR_INTERP_TABLE 2
#define tChargeMode_e_TCHARGE_MODE_RPM_TPS 0
#define TCU_GEAR_COUNT 10
#define TCU_MAGIC_SIZE 8
#define TCU_SOLENOID_COUNT 6
#define thermistor_conf_s_size 28
#define ThermistorConf_size 32
#define timing_mode_e_auto_enum 0="TM_DYNAMIC",1="TM_FIXED"
#define timing_mode_e_TM_DYNAMIC 0
#define timing_mode_e_TM_FIXED 1
#define tle8888_mode_e_auto_enum 0="TL_AUTO",3="TL_HALL",2="TL_MANUAL",1="TL_SEMI_AUTO"
#define tle8888_mode_e_TL_AUTO 0
#define tle8888_mode_e_TL_HALL 3
#define tle8888_mode_e_TL_MANUAL 2
#define tle8888_mode_e_TL_SEMI_AUTO 1
#define TOOTH_DATA_LENGTH 2000
#define TOOTH_PACKET_COUNT 1000
#define TOOTH_PACKET_SIZE 2
#define TOP_DEAD_CENTER_MESSAGE "r"
#define TORQUE_CURVE_SIZE 6
#define TOTAL_CONFIG_SIZE 22176
#define TPS_2_BYTE_PACKING_MULT 100
#define TPS_TPS_ACCEL_CLT_CORR_TABLE 4
#define TPS_TPS_ACCEL_TABLE 8
#define TRACTION_CONTROL_ETB_DROP_SIZE 6
#define transmission_controller_e_enum "None", "Simple Transmission", "GM 4L6X"
#define TransmissionControllerMode_auto_enum 0="None",2="Gm4l6x",1="SimpleTransmissionController"
#define TransmissionControllerMode_Gm4l6x 2
#define TransmissionControllerMode_None 0
#define TransmissionControllerMode_SimpleTransmissionController 1
#define TRIGGER_COMMENT "#"
#define trigger_config_s_size 12
#define TRIGGER_CRANK_BASED trigger_type == 2 || trigger_type == 5 || trigger_type == 10 || trigger_type == 12 || trigger_type == 20 || trigger_type == 21 || trigger_type == 26 || trigger_type == 27 || trigger_type == 33 || trigger_type == 38 || trigger_type == 39 || trigger_type == 44 || trigger_type == 45 || trigger_type == 46 || trigger_type == 53 || trigger_type == 55 || trigger_type == 57 || trigger_type == 58 || trigger_type == 61 || trigger_type == 62 || trigger_type == 68 || trigger_type == 70 || trigger_type == 71 || trigger_type == 72 || trigger_type == 74 || trigger_type == 75 || trigger_type == 76 || trigger_type == 77
#define TRIGGER_CYCLE_DURATION "cycleDuration"
#define TRIGGER_GAP_FROM "gapFrom"
#define TRIGGER_GAP_TO "gapTo"
#define TRIGGER_GAPS_COUNT "gapsCount"
#define TRIGGER_HAS_SECOND_CHANNEL "hasSecondChannel"
#define TRIGGER_INPUT_PIN_COUNT 2
#define TRIGGER_IS_CRANK_KEY "crankBased"
#define TRIGGER_IS_SECOND_WHEEL_CAM "isSecondWheelCam"
#define TRIGGER_KNOWN_OPERATION_MODE "knownOperationMode"
#define TRIGGER_SIMULATOR_PIN_COUNT 2
#define TRIGGER_SYNC_EDGE "syncEdge"
#define trigger_type_e_auto_enum 0="TT_TOOTHED_WHEEL",38="TT_12_TOOTH_CRANK",50="TT_1_16",25="TT_2JZ_3_34_SIMULATION_ONLY",70="TT_36_2_1",71="TT_36_2_1_1",23="TT_36_2_2_2",31="TT_3_1_CAM",72="TT_3_TOOTH_CRANK",77="TT_60DEG_TOOTH",75="TT_60_2_2_F3R",20="TT_60_2_VW",80="TT_6_TOOTH_CRANK",21="TT_BENELLI_TRE",30="TT_CHRYSLER_NGC_36_2_2",6="TT_DAIHATSU",2="TT_DODGE_NEON_1995",39="TT_DODGE_NEON_1995_ONLY_CRANK",14="TT_DODGE_NEON_2003_CAM",32="TT_DODGE_NEON_2003_CRANK",19="TT_DODGE_RAM",22="TT_DODGE_STRATUS",41="TT_FIAT_IAW_P8",1="TT_FORD_ASPIRE",42="TT_FORD_ST170",65="TT_FORD_TFI_PIP",27="TT_GM_24x",74="TT_GM_24x_2",54="TT_GM_60_2_2_2",5="TT_GM_7X",18="TT_HALF_MOON",28="TT_HONDA_CBR_600",67="TT_HONDA_K_CAM_4_1",46="TT_HONDA_K_CRANK_12_1",37="TT_JEEP_18_2_2_2",40="TT_JEEP_4_CYL",57="TT_KAWA_KX450F",15="TT_MAZDA_DOHC_1_4",3="TT_MAZDA_MIATA_NA",35="TT_MAZDA_MIATA_VVT_TEST",7="TT_MAZDA_SOHC_4",10="TT_MERCEDES_2_SEGMENT",33="TT_MIATA_VVT",34="TT_MITSU_4G63_CAM",76="TT_MITSU_4G63_CRANK",29="TT_MITSU_4G9x_CAM",11="TT_NARROW_SINGLE_TOOTH",52="TT_NISSAN_MR18_CAM_VVT",68="TT_NISSAN_MR18_CRANK",61="TT_NISSAN_QR25",24="TT_NISSAN_SR20VE",60="TT_NISSAN_VQ30",58="TT_NISSAN_VQ35",16="TT_ONE_PLUS_ONE",44="TT_RENIX_44_2_2",45="TT_RENIX_66_2_2_2",26="TT_ROVER_K",55="TT_SKODA_FAVORIT",36="TT_SUBARU_7_6",51="TT_SUBARU_7_WITHOUT_6",12="TT_SUBARU_EZ30",49="TT_SUBARU_SVX",64="TT_SUBARU_SVX_CAM_VVT",63="TT_SUBARU_SVX_CRANK_1",66="TT_SUZUKI_G13B",69="TT_TOOTHED_WHEEL_32_2",9="TT_TOOTHED_WHEEL_36_1",48="TT_TOOTHED_WHEEL_36_2",8="TT_TOOTHED_WHEEL_60_2",53="TT_TRI_TACH",81="TT_UNUSED",56="TT_VVT_BARRA_3_PLUS_1",47="TT_VVT_BOSCH_QUICK_START",4="TT_VVT_FORD_COYOTE",13="TT_VVT_MAZDA_SKYACTIV",43="TT_VVT_MIATA_NB",62="TT_VVT_MITSUBISHI_3A92",78="TT_VVT_MITSUBISHI_4G69",79="TT_VVT_MITSU_6G72",59="TT_VVT_NISSAN_VQ35",17="TT_VVT_TOYOTA_3_TOOTH",73="TT_VVT_TOYOTA_4_1"
#define trigger_type_e_enum "custom toothed wheel", "Ford Aspire", "Dodge Neon 1995", "Miata NA", "INVALID", "GM_7X", "Cooper R50", "Mazda SOHC 4", "60/2", "36/1", "Mercedes Two Segment", "Single Tooth", "EZ30", "INVALID", "Dodge Neon 2003", "Mazda DOHC 1+4", "1+1", "INVALID", "Half Moon", "Dodge Ram 1+16", "60/2 VW", "Benelli Tre", "Dodge Stratus", "36_2_2_2", "Nissan Primera", "dev 2JZ 3/34 simulator", "Rover K", "GM 24x 5 degree", "Honda CBR 600", "Mitsubishi 4G92/93/94 Cam 29", "Honda CBR 600 custom", "3/1 skipped", "Dodge Neon 2003 crank", "Miata NB", "Mitsubishi 4G63 Cam 34", "INVALID", "Subaru 7+6", "Jeep 18-2-2-2", "12 tooth crank", "Dodge Neon 1995 crank only", "Jeep XJ 4 cyl", "FiatIAQ_P8", "Mazda Z5", "INVALID", "Renix 44-2-2", "Renix 66-2-2-2", "Honda K 12+1", "INVALID", "36/2", "Subaru SVX", "1+16", "Subaru 7 without 6", "INVALID", "TriTach", "GM 60/2/2/2", "Skoda Favorit", "Barra 3+1 Cam", "Kawa KX450F", "Nissan VQ35", "INVALID", "Nissan VQ30", "Nissan QR25", "INVALID", "Subaru SVX Crank 1", "Subaru SVX Cam VVT", "Ford PIP", "Suzuki G13B", "Honda K 4+1", "Nissan MR18 Crank", "32/2", "36-2-1", "36-2-1-1", "3/0", "INVALID", "GM 24x 3 degree", "60-2-2 F3R", "Mitsu 4G63 Crank", "x2 30 Deg camshaft BTDC", "INVALID", "Mitsu 6G72 Cam", "6/0", "trg81", "trg82", "trg83"
#define trigger_type_e_TT_12_TOOTH_CRANK 38
#define trigger_type_e_TT_1_16 50
#define trigger_type_e_TT_2JZ_3_34_SIMULATION_ONLY 25
#define trigger_type_e_TT_36_2_1 70
#define trigger_type_e_TT_36_2_1_1 71
#define trigger_type_e_TT_36_2_2_2 23
#define trigger_type_e_TT_3_1_CAM 31
#define trigger_type_e_TT_3_TOOTH_CRANK 72
#define trigger_type_e_TT_60_2_2_F3R 75
#define trigger_type_e_TT_60_2_VW 20
#define trigger_type_e_TT_60DEG_TOOTH 77
#define trigger_type_e_TT_6_TOOTH_CRANK 80
#define trigger_type_e_TT_BENELLI_TRE 21
#define trigger_type_e_TT_CHRYSLER_NGC_36_2_2 30
#define trigger_type_e_TT_DAIHATSU 6
#define trigger_type_e_TT_DODGE_NEON_1995 2
#define trigger_type_e_TT_DODGE_NEON_1995_ONLY_CRANK 39
#define trigger_type_e_TT_DODGE_NEON_2003_CAM 14
#define trigger_type_e_TT_DODGE_NEON_2003_CRANK 32
#define trigger_type_e_TT_DODGE_RAM 19
#define trigger_type_e_TT_DODGE_STRATUS 22
#define trigger_type_e_TT_FIAT_IAW_P8 41
#define trigger_type_e_TT_FORD_ASPIRE 1
#define trigger_type_e_TT_FORD_ST170 42
#define trigger_type_e_TT_FORD_TFI_PIP 65
#define trigger_type_e_TT_GM_24x 27
#define trigger_type_e_TT_GM_24x_2 74
#define trigger_type_e_TT_GM_60_2_2_2 54
#define trigger_type_e_TT_GM_7X 5
#define trigger_type_e_TT_HALF_MOON 18
#define trigger_type_e_TT_HONDA_CBR_600 28
#define trigger_type_e_TT_HONDA_K_CAM_4_1 67
#define trigger_type_e_TT_HONDA_K_CRANK_12_1 46
#define trigger_type_e_TT_JEEP_18_2_2_2 37
#define trigger_type_e_TT_JEEP_4_CYL 40
#define trigger_type_e_TT_KAWA_KX450F 57
#define trigger_type_e_TT_MAZDA_DOHC_1_4 15
#define trigger_type_e_TT_MAZDA_MIATA_NA 3
#define trigger_type_e_TT_MAZDA_MIATA_VVT_TEST 35
#define trigger_type_e_TT_MAZDA_SOHC_4 7
#define trigger_type_e_TT_MERCEDES_2_SEGMENT 10
#define trigger_type_e_TT_MIATA_VVT 33
#define trigger_type_e_TT_MITSU_4G63_CAM 34
#define trigger_type_e_TT_MITSU_4G63_CRANK 76
#define trigger_type_e_TT_MITSU_4G9x_CAM 29
#define trigger_type_e_TT_NARROW_SINGLE_TOOTH 11
#define trigger_type_e_TT_NISSAN_MR18_CAM_VVT 52
#define trigger_type_e_TT_NISSAN_MR18_CRANK 68
#define trigger_type_e_TT_NISSAN_QR25 61
#define trigger_type_e_TT_NISSAN_SR20VE 24
#define trigger_type_e_TT_NISSAN_VQ30 60
#define trigger_type_e_TT_NISSAN_VQ35 58
#define trigger_type_e_TT_ONE_PLUS_ONE 16
#define trigger_type_e_TT_RENIX_44_2_2 44
#define trigger_type_e_TT_RENIX_66_2_2_2 45
#define trigger_type_e_TT_ROVER_K 26
#define trigger_type_e_TT_SKODA_FAVORIT 55
#define trigger_type_e_TT_SUBARU_7_6 36
#define trigger_type_e_TT_SUBARU_7_WITHOUT_6 51
#define trigger_type_e_TT_SUBARU_EZ30 12
#define trigger_type_e_TT_SUBARU_SVX 49
#define trigger_type_e_TT_SUBARU_SVX_CAM_VVT 64
#define trigger_type_e_TT_SUBARU_SVX_CRANK_1 63
#define trigger_type_e_TT_SUZUKI_G13B 66
#define trigger_type_e_TT_TOOTHED_WHEEL 0
#define trigger_type_e_TT_TOOTHED_WHEEL_32_2 69
#define trigger_type_e_TT_TOOTHED_WHEEL_36_1 9
#define trigger_type_e_TT_TOOTHED_WHEEL_36_2 48
#define trigger_type_e_TT_TOOTHED_WHEEL_60_2 8
#define trigger_type_e_TT_TRI_TACH 53
#define trigger_type_e_TT_UNUSED 81
#define trigger_type_e_TT_VVT_BARRA_3_PLUS_1 56
#define trigger_type_e_TT_VVT_BOSCH_QUICK_START 47
#define trigger_type_e_TT_VVT_FORD_COYOTE 4
#define trigger_type_e_TT_VVT_MAZDA_SKYACTIV 13
#define trigger_type_e_TT_VVT_MIATA_NB 43
#define trigger_type_e_TT_VVT_MITSU_6G72 79
#define trigger_type_e_TT_VVT_MITSUBISHI_3A92 62
#define trigger_type_e_TT_VVT_MITSUBISHI_4G69 78
#define trigger_type_e_TT_VVT_NISSAN_VQ35 59
#define trigger_type_e_TT_VVT_TOYOTA_3_TOOTH 17
#define trigger_type_e_TT_VVT_TOYOTA_4_1 73
#define TRIGGER_TYPE_WITH_SECOND_WHEEL trigger_type == 1 || trigger_type == 3 || trigger_type == 15 || trigger_type == 16 || trigger_type == 19 || trigger_type == 25 || trigger_type == 28 || trigger_type == 31 || trigger_type == 35 || trigger_type == 36 || trigger_type == 37 || trigger_type == 40 || trigger_type == 49 || trigger_type == 50 || trigger_type == 53 || trigger_type == 54 || trigger_type == 63 || trigger_type == 64
#define TRIGGER_TYPE_WITHOUT_KNOWN_LOCATION trigger_type == 8 || trigger_type == 9 || trigger_type == 11 || trigger_type == 17 || trigger_type == 18 || trigger_type == 23 || trigger_type == 48 || trigger_type == 69 || trigger_type == 73
#define TRIGGER_WITH_SYNC "isSynchronizationNeeded"
#define TRIGGERS_FILE_NAME "triggers.txt"
#define TriggerWheel_T_PRIMARY 0
#define TriggerWheel_T_SECONDARY 1
#define TRIM_SIZE 4
#define ts_14_command_TS_14_0 0
#define ts_14_command_TS_14_1 1
#define ts_14_command_TS_14_4 4
#define ts_14_command_TS_14_5 5
#define ts_14_command_TS_14_9 9
#define ts_14_command_TS_BURN_WITHOUT_FLASH 0x15
#define ts_14_command_TS_ETB_AUTOCAL_0 0x0E
#define ts_14_command_TS_ETB_AUTOCAL_1 0x11
#define ts_14_command_TS_ETB_RESET 0x0B
#define ts_14_command_TS_ETB_START_AUTOTUNE 0x0C
#define ts_14_command_TS_ETB_STOP_AUTOTUNE 0x10
#define ts_14_command_TS_EXTERNAL_TRIGGER_STIMULATOR_ENABLE 0x13
#define ts_14_command_TS_GRAB_PEDAL_UP 6
#define ts_14_command_TS_GRAB_PEDAL_WOT 7
#define ts_14_command_TS_GRAB_TPS_CLOSED 2
#define ts_14_command_TS_GRAB_TPS_WOT 3
#define ts_14_command_TS_RESET_MC33810 0x14
#define ts_14_command_TS_RESET_TLE8888 8
#define ts_14_command_TS_TRIGGER_STIMULATOR_DISABLE 0x0F
#define ts_14_command_TS_TRIGGER_STIMULATOR_ENABLE 0x0D
#define ts_14_command_TS_WIDEBAND_UPDATE 0x12
#define ts_14_command_TS_WRITE_FLASH 0x0A
#define TS_BLOCK_READ_TIMEOUT 3000
#define TS_BURN_COMMAND 'B'
#define TS_BURN_COMMAND_char B
#define TS_CHUNK_WRITE_COMMAND 'C'
#define TS_CHUNK_WRITE_COMMAND_char C
#define ts_command_e_TS_BENCH_CATEGORY 22
#define ts_command_e_TS_CLEAR_WARNINGS 17
#define ts_command_e_TS_COMMAND_1 1
#define ts_command_e_TS_COMMAND_10 10
#define ts_command_e_TS_COMMAND_11 11
#define ts_command_e_TS_COMMAND_12 12
#define ts_command_e_TS_COMMAND_13 13
#define ts_command_e_TS_COMMAND_14 14
#define ts_command_e_TS_COMMAND_15 15
#define ts_command_e_TS_COMMAND_16 16
#define ts_command_e_TS_COMMAND_2 2
#define ts_command_e_TS_COMMAND_3 3
#define ts_command_e_TS_COMMAND_4 4
#define ts_command_e_TS_COMMAND_5 5
#define ts_command_e_TS_COMMAND_6 6
#define ts_command_e_TS_COMMAND_7 7
#define ts_command_e_TS_COMMAND_8 8
#define ts_command_e_TS_COMMAND_9 9
#define ts_command_e_TS_DEBUG_MODE 0
#define ts_command_e_TS_IGNITION_CATEGORY 18
#define ts_command_e_TS_INJECTOR_CATEGORY 19
#define ts_command_e_TS_LUA_OUTPUT_CATEGORY 32
#define ts_command_e_TS_SET_DEFAULT_ENGINE 31
#define ts_command_e_TS_SET_ENGINE_TYPE 30
#define ts_command_e_TS_SOLENOID_CATEGORY 25
#define ts_command_e_TS_UNUSED_23 23
#define ts_command_e_TS_UNUSED_24 24
#define ts_command_e_TS_UNUSED_26 26
#define ts_command_e_TS_UNUSED_27 27
#define ts_command_e_TS_UNUSED_28 28
#define ts_command_e_TS_UNUSED_29 29
#define ts_command_e_TS_WIDEBAND 21
#define ts_command_e_TS_X14 20
#define TS_COMMAND_F 'F'
#define TS_COMMAND_F_char F
#define TS_COMPOSITE_DISABLE 2
#define TS_COMPOSITE_ENABLE 1
#define TS_COMPOSITE_READ 3
#define TS_CRC_CHECK_COMMAND 'k'
#define TS_CRC_CHECK_COMMAND_char k
#define TS_EXECUTE 'E'
#define TS_EXECUTE_char E
#define TS_FILE_VERSION 20230721
#define TS_FILE_VERSION_OFFSET 124
#define TS_GET_COMPOSITE_BUFFER_DONE_DIFFERENTLY '8'
#define TS_GET_COMPOSITE_BUFFER_DONE_DIFFERENTLY_char 8
#define TS_GET_CONFIG_ERROR 'e'
#define TS_GET_CONFIG_ERROR_char e
#define TS_GET_FIRMWARE_VERSION 'V'
#define TS_GET_FIRMWARE_VERSION_char V
#define TS_GET_OUTPUTS_SIZE '4'
#define TS_GET_OUTPUTS_SIZE_char 4
#define TS_GET_PROTOCOL_VERSION_COMMAND_F 'F'
#define TS_GET_PROTOCOL_VERSION_COMMAND_F_char F
#define TS_GET_SCATTERED_GET_COMMAND '9'
#define TS_GET_SCATTERED_GET_COMMAND_char 9
#define TS_GET_TEXT 'G'
#define TS_GET_TEXT_char G
#define TS_HELLO_COMMAND 'S'
#define TS_HELLO_COMMAND_char S
#define TS_IO_TEST_COMMAND 'Z'
#define TS_IO_TEST_COMMAND_char Z
#define TS_ONLINE_PROTOCOL 'z'
#define TS_ONLINE_PROTOCOL_char z
#define TS_OUTPUT_COMMAND 'O'
#define TS_OUTPUT_COMMAND_char O
#define TS_PAGE_COMMAND 'P'
#define TS_PAGE_COMMAND_char P
#define TS_PERF_TRACE_BEGIN '_'
#define TS_PERF_TRACE_BEGIN_char _
#define TS_PERF_TRACE_GET_BUFFER 'b'
#define TS_PERF_TRACE_GET_BUFFER_char b
#define TS_PROTOCOL "001"
#define TS_QUERY_COMMAND 'Q'
#define TS_QUERY_COMMAND_char Q
#define TS_READ_COMMAND 'R'
#define TS_READ_COMMAND_char R
#define TS_RESPONSE_BURN_OK 4
#define TS_RESPONSE_COMMAND_OK 7
#define TS_RESPONSE_CRC_FAILURE 0x82
#define TS_RESPONSE_FRAMING_ERROR 0x8D
#define TS_RESPONSE_OK 0
#define TS_RESPONSE_OUT_OF_RANGE 0x84
#define TS_RESPONSE_UNDERRUN 0x80
#define TS_RESPONSE_UNRECOGNIZED_COMMAND 0x83
#define TS_SET_LOGGER_SWITCH 'l'
#define TS_SET_LOGGER_SWITCH_char l
#define ts_show_analog_divider true
#define ts_show_auxserial_pins true
#define ts_show_can2 true
#define ts_show_can_pins true
#define ts_show_clt_iat_pullup true
#define ts_show_egt true
#define ts_show_engine_control false
#define ts_show_etb true
#define ts_show_etb_pins true
#define ts_show_full_pinout true
#define ts_show_hardware_simulator true
#define ts_show_hip9011 false
#define ts_show_ign_key_analog_input false
#define ts_show_ign_key_switch false
#define ts_show_ignitionPinMode true
#define ts_show_inj_diag false
#define ts_show_injectionPinMode false
#define ts_show_joystick true
#define ts_show_l9779 false
#define ts_show_lcd true
#define ts_show_main_relay true
#define ts_show_main_relay_microRusEFI_message false
#define ts_show_mc33810 false
#define ts_show_output_diag false
#define ts_show_sd_card true
#define ts_show_sd_pins true
#define ts_show_software_knock false
#define ts_show_spi true
#define ts_show_spi2_enable true
#define ts_show_spi2_pins true
#define ts_show_spi3_pins true
#define ts_show_tle8888 false
#define ts_show_tps_sent false
#define ts_show_trigger_comparator false
#define ts_show_tunerstudio_port true
#define ts_show_vbatt true
#define ts_show_vr_threshold_2 false
#define ts_show_vr_threshold_all false
#define ts_show_vr_threshold_pins true
#define TS_SIGNATURE "rusEFI master.2024.01.25.cypress.2575659228"
#define TS_SIMULATE_CAN '>'
#define TS_SIMULATE_CAN_char >
#define TS_SINGLE_WRITE_COMMAND 'W'
#define TS_SINGLE_WRITE_COMMAND_char W
#define TS_TEST_COMMAND 't'
#define TS_TEST_COMMAND_char t
#define TS_TOTAL_OUTPUT_SIZE 1456
#define TS_TRIGGER_SCOPE_CHANNEL_1_NAME "Channel 1"
#define TS_TRIGGER_SCOPE_CHANNEL_2_NAME "Channel 2"
#define TS_TRIGGER_SCOPE_DISABLE 5
#define TS_TRIGGER_SCOPE_ENABLE 4
#define TS_TRIGGER_SCOPE_READ 6
#define TsCalMode_EtbKd 5
#define TsCalMode_EtbKi 4
#define TsCalMode_EtbKp 3
#define TsCalMode_None 0
#define TsCalMode_PedalMax 13
#define TsCalMode_PedalMin 12
#define TsCalMode_Tps1Max 1
#define TsCalMode_Tps1Min 2
#define TsCalMode_Tps1SecondaryMax 6
#define TsCalMode_Tps1SecondaryMin 7
#define TsCalMode_Tps2Max 8
#define TsCalMode_Tps2Min 9
#define TsCalMode_Tps2SecondaryMax 10
#define TsCalMode_Tps2SecondaryMin 11
#define uart_device_e_auto_enum 0="UART_NONE",1="UART_DEVICE_1",2="UART_DEVICE_2",3="UART_DEVICE_3",4="UART_DEVICE_4"
#define uart_device_e_UART_DEVICE_1 1
#define uart_device_e_UART_DEVICE_2 2
#define uart_device_e_UART_DEVICE_3 3
#define uart_device_e_UART_DEVICE_4 4
#define uart_device_e_UART_NONE 0
#define UiMode_auto_enum 0="FULL",1="INSTALLATION",2="TUNING"
#define UiMode_enum "Full", "Installation", "Tuning"
#define UiMode_FULL 0
#define UiMode_INSTALLATION 1
#define UiMode_TUNING 2
#define VBAT_INJECTOR_CURVE_SIZE 8
#define VE_BLEND_COUNT 4
#define ve_override_e_auto_enum 0="VE_None",1="VE_MAP",2="VE_TPS"
#define ve_override_e_enum "None", "MAP", "TPS"
#define ve_override_e_VE_MAP 1
#define ve_override_e_VE_None 0
#define ve_override_e_VE_TPS 2
#define VEHICLE_INFO_SIZE 32
#define VIN_NUMBER_SIZE 17
#define VOLTAGE_1_BYTE_PACKING_DIV 0.02
#define VR_THRESHOLD_COUNT 2
#define vr_threshold_s_size 16
#define VSS_FILTER_MAX 200
#define VSS_FILTER_MIN 3
#define vvt_mode_e_auto_enum 0="VVT_INACTIVE",8="VVT_BARRA_3_PLUS_1",5="VVT_BOSCH_QUICK_START",19="VVT_FORD_COYOTE",7="VVT_FORD_ST170",16="VVT_HONDA_K_EXHAUST",10="VVT_HONDA_K_INTAKE",13="VVT_MAP_V_TWIN",15="VVT_MAZDA_SKYACTIV",3="VVT_MIATA_NB",12="VVT_MITSUBISHI_3A92",18="VVT_MITSUBISHI_4G63",4="VVT_MITSUBISHI_4G69",17="VVT_MITSUBISHI_4G9x",20="VVT_MITSUBISHI_6G72",14="VVT_MITSUBISHI_6G75",11="VVT_NISSAN_MR",9="VVT_NISSAN_VQ",1="VVT_SINGLE_TOOTH",2="VVT_TOYOTA_3_TOOTH",6="VVT_TOYOTA_4_1"
#define vvt_mode_e_enum "Inactive", "Single Tooth", "Toyota 3 Tooth", "Miata NB2", "Mitsu 4G69", "Bosch Quick Start", "4/1", "ST 170", "Ford Barra 3+1", "Nissan VQ", "Honda K Intake", "Nissan MR18", "Mitsu 3A92", "VTwin by MAP", "Mitsu 6G75", "Mazda Skyactiv", "Honda K Exhaust", "Mitsubishi 4G92/93/94", "Mitsubishi 4G63", "Ford Coyote", "Mitsu 6G72"
#define vvt_mode_e_VVT_BARRA_3_PLUS_1 8
#define vvt_mode_e_VVT_BOSCH_QUICK_START 5
#define vvt_mode_e_VVT_FORD_COYOTE 19
#define vvt_mode_e_VVT_FORD_ST170 7
#define vvt_mode_e_VVT_HONDA_K_EXHAUST 16
#define vvt_mode_e_VVT_HONDA_K_INTAKE 10
#define vvt_mode_e_VVT_INACTIVE 0
#define vvt_mode_e_VVT_MAP_V_TWIN 13
#define vvt_mode_e_VVT_MAZDA_SKYACTIV 15
#define vvt_mode_e_VVT_MIATA_NB 3
#define vvt_mode_e_VVT_MITSUBISHI_3A92 12
#define vvt_mode_e_VVT_MITSUBISHI_4G63 18
#define vvt_mode_e_VVT_MITSUBISHI_4G69 4
#define vvt_mode_e_VVT_MITSUBISHI_4G9x 17
#define vvt_mode_e_VVT_MITSUBISHI_6G72 20
#define vvt_mode_e_VVT_MITSUBISHI_6G75 14
#define vvt_mode_e_VVT_NISSAN_MR 11
#define vvt_mode_e_VVT_NISSAN_VQ 9
#define vvt_mode_e_VVT_SINGLE_TOOTH 1
#define vvt_mode_e_VVT_TOYOTA_3_TOOTH 2
#define vvt_mode_e_VVT_TOYOTA_4_1 6
#define VVT_TRACKING_LENGTH 4
#define WARNING_BUFFER_SIZE 120
#define WWAE_TABLE_SIZE 8
