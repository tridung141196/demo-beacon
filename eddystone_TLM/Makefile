# This file was automagically generated by mbed.org. For more information, 
# see http://mbed.org/handbook/Exporting-to-GCC-ARM-Embedded

###############################################################################
# Boiler-plate

# cross-platform directory manipulation
ifeq ($(shell echo $$OS),$$OS)
    MAKEDIR = if not exist "$(1)" mkdir "$(1)"
    RM = rmdir /S /Q "$(1)"
else
    MAKEDIR = '$(SHELL)' -c "mkdir -p \"$(1)\""
    RM = '$(SHELL)' -c "rm -rf \"$(1)\""
endif

OBJDIR := BUILD
# Move to the build directory
ifeq (,$(filter $(OBJDIR),$(notdir $(CURDIR))))
.SUFFIXES:
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
MAKETARGET = '$(MAKE)' --no-print-directory -C $(OBJDIR) -f '$(mkfile_path)' \
		'SRCDIR=$(CURDIR)' $(MAKECMDGOALS)
.PHONY: $(OBJDIR) clean
all:
	+@$(call MAKEDIR,$(OBJDIR))
	+@$(MAKETARGET)
$(OBJDIR): all
Makefile : ;
% :: $(OBJDIR) ; :
clean :
	$(call RM,$(OBJDIR))

else

# trick rules into thinking we are in the root, when we are in the bulid dir
VPATH = ..

# Boiler-plate
###############################################################################
# Project settings

PROJECT := eddystone_TLM


# Project settings
###############################################################################
# Objects and Paths

OBJECTS += BLE_API/common/BLEDevice.o
OBJECTS += BLE_API/common/GapAdvertisingData.o
OBJECTS += BLE_API/common/GapAdvertisingParams.o
OBJECTS += BLE_API/common/GattService.o
OBJECTS += BLE_API/common/UUID.o
OBJECTS += BLE_API/services/DFUService.o
OBJECTS += BLE_API/services/UARTService.o
OBJECTS += main.o
OBJECTS += nRF51822/btle/btle.o
OBJECTS += nRF51822/btle/btle_advertising.o
OBJECTS += nRF51822/btle/btle_gap.o
OBJECTS += nRF51822/btle/custom/custom_helper.o
OBJECTS += nRF51822/nRF51822n.o
OBJECTS += nRF51822/nRF51Gap.o
OBJECTS += nRF51822/nRF51GattServer.o
OBJECTS += nRF51822/nordic/app_common/app_gpiote.o
OBJECTS += nRF51822/nordic/app_common/app_scheduler.o
OBJECTS += nRF51822/nordic/app_common/crc16.o
OBJECTS += nRF51822/nordic/app_common/hci_mem_pool.o
OBJECTS += nRF51822/nordic/app_common/pstorage.o
OBJECTS += nRF51822/nordic/ble/ble_advdata.o
OBJECTS += nRF51822/nordic/ble/ble_advdata_parser.o
OBJECTS += nRF51822/nordic/ble/ble_bondmngr.o
OBJECTS += nRF51822/nordic/ble/ble_conn_params.o
OBJECTS += nRF51822/nordic/ble/ble_debug_assert_handler.o
OBJECTS += nRF51822/nordic/ble/ble_error_log.o
OBJECTS += nRF51822/nordic/ble/ble_services/ble_srv_common.o
OBJECTS += nRF51822/nordic/bootloader_dfu/bootloader_util_arm.o
OBJECTS += nRF51822/nordic/bootloader_dfu/dfu_app_handler.o
OBJECTS += nRF51822/nordic/softdevice_handler.o

 SYS_OBJECTS += mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM/board.o
 SYS_OBJECTS += mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM/cmsis_nvic.o
 SYS_OBJECTS += mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM/retarget.o
 SYS_OBJECTS += mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM/startup_NRF51822.o
 SYS_OBJECTS += mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM/system_nrf51822.o

INCLUDE_PATHS += -I../
INCLUDE_PATHS += -I../.
INCLUDE_PATHS += -I../BLE_API
INCLUDE_PATHS += -I../BLE_API/common
INCLUDE_PATHS += -I../BLE_API/public
INCLUDE_PATHS += -I../BLE_API/services
INCLUDE_PATHS += -I../mbed/.
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/nrf-sdk
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/nrf-sdk/app_common
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/nrf-sdk/sd_common
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s110_nrf51822_7_1_0
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s110_nrf51822_7_1_0/s110_nrf51822_7.1.0_API
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s110_nrf51822_7_1_0/s110_nrf51822_7.1.0_API/include
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/TARGET_WALLBOT_BLE
INCLUDE_PATHS += -I../mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM
INCLUDE_PATHS += -I../nRF51822
INCLUDE_PATHS += -I../nRF51822/btle
INCLUDE_PATHS += -I../nRF51822/btle/custom
INCLUDE_PATHS += -I../nRF51822/common
INCLUDE_PATHS += -I../nRF51822/nordic
INCLUDE_PATHS += -I../nRF51822/nordic/app_common
INCLUDE_PATHS += -I../nRF51822/nordic/ble
INCLUDE_PATHS += -I../nRF51822/nordic/ble/ble_services
INCLUDE_PATHS += -I../nRF51822/nordic/bootloader_dfu
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk/app_common
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk/ble
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk/ble/ble_services
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk/ble/device_manager
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk/bootloader_dfu
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk/s110
INCLUDE_PATHS += -I../nRF51822/nordic/nrf-sdk/sd_common

LIBRARY_PATHS := -L../mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM 
LIBRARIES := -lmbed 
LINKER_SCRIPT ?= ../mbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM/NRF51822.ld

# Objects and Paths
###############################################################################
# Tools and Flags

AS      = 'arm-none-eabi-gcc' '-x' 'assembler-with-cpp' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-DMBED_RTOS_SINGLE_THREAD' '-mcpu=cortex-m0' '-mthumb'
CC      = 'arm-none-eabi-gcc' '-std=gnu99' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-DMBED_RTOS_SINGLE_THREAD' '-mcpu=cortex-m0' '-mthumb'
CPP     = 'arm-none-eabi-g++' '-std=gnu++98' '-fno-rtti' '-Wvla' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-DMBED_RTOS_SINGLE_THREAD' '-mcpu=cortex-m0' '-mthumb'
LD      = 'arm-none-eabi-gcc'
ELF2BIN = 'arm-none-eabi-objcopy'
PREPROC = 'arm-none-eabi-cpp' '-E' '-P' '-Wl,--gc-sections' '-Wl,--wrap,main' '--specs=nano.specs' '-mcpu=cortex-m0' '-mthumb'

SREC_CAT = srec_cat

C_FLAGS += -std=gnu99
C_FLAGS += -D__CORTEX_M0
C_FLAGS += -DTARGET_MCU_NRF51_16K_BASE
C_FLAGS += -DNRF51
C_FLAGS += -DTARGET_MCU_NRF51_16K_S130
C_FLAGS += -DTARGET_LIKE_MBED
C_FLAGS += -DTARGET_NRF51822
C_FLAGS += -DDEVICE_PORTINOUT=1
C_FLAGS += -D__MBED_CMSIS_RTOS_CM
C_FLAGS += -DTOOLCHAIN_object
C_FLAGS += -D__CMSIS_RTOS
C_FLAGS += -DTARGET_MCU_NRF51_16K
C_FLAGS += -DTOOLCHAIN_GCC
C_FLAGS += -DTARGET_CORTEX_M
C_FLAGS += -DTARGET_WALLBOT_BLE
C_FLAGS += -DARM_MATH_CM0
C_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
C_FLAGS += -DFEATURE_BLE=1
C_FLAGS += -DTARGET_M0
C_FLAGS += -DTARGET_MCU_NRF51
C_FLAGS += -DCMSIS_VECTAB_VIRTUAL
C_FLAGS += -DDEVICE_SERIAL=1
C_FLAGS += -D__MBED__=1
C_FLAGS += -DTARGET_CORTEX
C_FLAGS += -DDEVICE_I2C=1
C_FLAGS += -DDEVICE_PORTOUT=1
C_FLAGS += -DDEVICE_SLEEP=1
C_FLAGS += -DTARGET_RELEASE
C_FLAGS += -DTARGET_NORDIC
C_FLAGS += -DTARGET_MCU_NORDIC_16K
C_FLAGS += -DDEVICE_PORTIN=1
C_FLAGS += -DMBED_BUILD_TIMESTAMP=1511676733.81
C_FLAGS += -DTOOLCHAIN_GCC_ARM
C_FLAGS += -DTARGET_MCU_NRF51822
C_FLAGS += -DDEVICE_SPI=1
C_FLAGS += -DCMSIS_VECTAB_VIRTUAL_HEADER_FILE=\"cmsis_nvic.h\"
C_FLAGS += -DDEVICE_INTERRUPTIN=1
C_FLAGS += -DDEVICE_SPISLAVE=1
C_FLAGS += -DDEVICE_ANALOGIN=1
C_FLAGS += -DDEVICE_PWMOUT=1
C_FLAGS += -DTARGET_LIKE_CORTEX_M0
C_FLAGS += -include
C_FLAGS += mbed_config.h

CXX_FLAGS += -std=gnu++98
CXX_FLAGS += -fno-rtti
CXX_FLAGS += -Wvla
CXX_FLAGS += -D__CORTEX_M0
CXX_FLAGS += -DTARGET_MCU_NRF51_16K_BASE
CXX_FLAGS += -DNRF51
CXX_FLAGS += -DTARGET_MCU_NRF51_16K_S130
CXX_FLAGS += -DTARGET_LIKE_MBED
CXX_FLAGS += -DTARGET_NRF51822
CXX_FLAGS += -DDEVICE_PORTINOUT=1
CXX_FLAGS += -D__MBED_CMSIS_RTOS_CM
CXX_FLAGS += -DTOOLCHAIN_object
CXX_FLAGS += -D__CMSIS_RTOS
CXX_FLAGS += -DTARGET_MCU_NRF51_16K
CXX_FLAGS += -DTOOLCHAIN_GCC
CXX_FLAGS += -DTARGET_CORTEX_M
CXX_FLAGS += -DTARGET_WALLBOT_BLE
CXX_FLAGS += -DARM_MATH_CM0
CXX_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
CXX_FLAGS += -DFEATURE_BLE=1
CXX_FLAGS += -DTARGET_M0
CXX_FLAGS += -DTARGET_MCU_NRF51
CXX_FLAGS += -DCMSIS_VECTAB_VIRTUAL
CXX_FLAGS += -DDEVICE_SERIAL=1
CXX_FLAGS += -D__MBED__=1
CXX_FLAGS += -DTARGET_CORTEX
CXX_FLAGS += -DDEVICE_I2C=1
CXX_FLAGS += -DDEVICE_PORTOUT=1
CXX_FLAGS += -DDEVICE_SLEEP=1
CXX_FLAGS += -DTARGET_RELEASE
CXX_FLAGS += -DTARGET_NORDIC
CXX_FLAGS += -DTARGET_MCU_NORDIC_16K
CXX_FLAGS += -DDEVICE_PORTIN=1
CXX_FLAGS += -DMBED_BUILD_TIMESTAMP=1511676733.81
CXX_FLAGS += -DTOOLCHAIN_GCC_ARM
CXX_FLAGS += -DTARGET_MCU_NRF51822
CXX_FLAGS += -DDEVICE_SPI=1
CXX_FLAGS += -DCMSIS_VECTAB_VIRTUAL_HEADER_FILE=\"cmsis_nvic.h\"
CXX_FLAGS += -DDEVICE_INTERRUPTIN=1
CXX_FLAGS += -DDEVICE_SPISLAVE=1
CXX_FLAGS += -DDEVICE_ANALOGIN=1
CXX_FLAGS += -DDEVICE_PWMOUT=1
CXX_FLAGS += -DTARGET_LIKE_CORTEX_M0
CXX_FLAGS += -include
CXX_FLAGS += mbed_config.h

ASM_FLAGS += -x
ASM_FLAGS += assembler-with-cpp
ASM_FLAGS += -D__CORTEX_M0
ASM_FLAGS += -DTARGET_MCU_NRF51_16K
ASM_FLAGS += -DNRF51
ASM_FLAGS += -DTARGET_MCU_NRF51_16K_S130
ASM_FLAGS += -DTARGET_NRF51822
ASM_FLAGS += -DARM_MATH_CM0
ASM_FLAGS += -D__MBED_CMSIS_RTOS_CM
ASM_FLAGS += -DCMSIS_VECTAB_VIRTUAL_HEADER_FILE=\"cmsis_nvic.h\"
ASM_FLAGS += -DCMSIS_VECTAB_VIRTUAL
ASM_FLAGS += -D__CMSIS_RTOS
ASM_FLAGS += -DTARGET_MCU_NORDIC_16K
ASM_FLAGS += -I.
ASM_FLAGS += -InRF51822
ASM_FLAGS += -InRF51822/nordic
ASM_FLAGS += -InRF51822/nordic/nrf-sdk
ASM_FLAGS += -InRF51822/nordic/nrf-sdk/s110
ASM_FLAGS += -InRF51822/nordic/nrf-sdk/bootloader_dfu
ASM_FLAGS += -InRF51822/nordic/nrf-sdk/app_common
ASM_FLAGS += -InRF51822/nordic/nrf-sdk/sd_common
ASM_FLAGS += -InRF51822/nordic/nrf-sdk/ble
ASM_FLAGS += -InRF51822/nordic/nrf-sdk/ble/device_manager
ASM_FLAGS += -InRF51822/nordic/nrf-sdk/ble/ble_services
ASM_FLAGS += -InRF51822/nordic/bootloader_dfu
ASM_FLAGS += -InRF51822/nordic/app_common
ASM_FLAGS += -InRF51822/nordic/ble
ASM_FLAGS += -InRF51822/nordic/ble/ble_services
ASM_FLAGS += -InRF51822/common
ASM_FLAGS += -InRF51822/btle
ASM_FLAGS += -InRF51822/btle/custom
ASM_FLAGS += -IBLE_API
ASM_FLAGS += -IBLE_API/services
ASM_FLAGS += -IBLE_API/common
ASM_FLAGS += -IBLE_API/public
ASM_FLAGS += -Imbed/.
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/nrf-sdk
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/nrf-sdk/app_common
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/nrf-sdk/sd_common
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s110_nrf51822_7_1_0
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s110_nrf51822_7_1_0/s110_nrf51822_7.1.0_API
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s110_nrf51822_7_1_0/s110_nrf51822_7.1.0_API/include
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/TARGET_WALLBOT_BLE
ASM_FLAGS += -Imbed/TARGET_WALLBOT_BLE/TOOLCHAIN_GCC_ARM


LD_FLAGS :=-Wl,--gc-sections -Wl,--wrap,main --specs=nano.specs -mcpu=cortex-m0 -mthumb 
LD_SYS_LIBS :=-Wl,--start-group -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys -lmbed -Wl,--end-group

# Tools and Flags
###############################################################################
# Rules

.PHONY: all lst size

all: $(PROJECT).bin $(PROJECT)-combined.hex size


.s.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  


.S.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  

.c.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CC) $(C_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.cpp.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CPP) $(CXX_FLAGS) $(INCLUDE_PATHS) -o $@ $<


$(PROJECT).link_script.ld: $(LINKER_SCRIPT)
	@$(PREPROC) $< -o $@



$(PROJECT).elf: $(OBJECTS) $(SYS_OBJECTS) $(PROJECT).link_script.ld 
	+@echo "link: $(notdir $@)"
	@$(LD) $(LD_FLAGS) -T $(filter-out %.o, $^) $(LIBRARY_PATHS) --output $@ $(filter %.o, $^) $(LIBRARIES) $(LD_SYS_LIBS)


$(PROJECT).bin: $(PROJECT).elf
	$(ELF2BIN) -O binary $< $@


$(PROJECT).hex: $(PROJECT).elf
	$(ELF2BIN) -O ihex $< $@


$(PROJECT)-combined.hex: $(PROJECT).hex
	+@echo "NOTE: the $(SREC_CAT) binary is required to be present in your PATH. Please see http://srecord.sourceforge.net/ for more information."
	$(SREC_CAT) ../mbed/TARGET_WALLBOT_BLE/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s110_nrf51822_7_1_0/s110_nrf51822_7.1.0_softdevice.hex  -intel $(PROJECT).hex -intel -o $(PROJECT)-combined.hex -intel --line-length=44
	+@echo "===== hex file ready to flash: $(OBJDIR)/$@ ====="

# Rules
###############################################################################
# Dependencies

DEPS = $(OBJECTS:.o=.d) $(SYS_OBJECTS:.o=.d)
-include $(DEPS)
endif

# Dependencies
###############################################################################
