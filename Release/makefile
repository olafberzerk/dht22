################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -f

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include arduino/core/subdir.mk
-include Libraries/DHTlib/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
arduino.ar \

ELF += \
dht22.elf \

EEP += \
dht22.eep \

FLASH_IMAGE += \
dht22.hex \


# All Target
all: dht22

# Tool invocations
dht22: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"E:\Arduino\hardware\tools\avr/bin/avr-size" -A "E:/eclipse/workspace/git/dht22/Release/dht22.elf"
	@echo 'Finished building target: $@'
	@echo ' '

arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"E:\Arduino\hardware\tools\avr/bin/avr-ar" rcs  "E:/eclipse/workspace/git/dht22/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

dht22.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"E:\Arduino\hardware\tools\avr/bin/avr-gcc" -Os -Wl,--gc-sections -mmcu=atmega328p  -o "E:/eclipse/workspace/git/dht22/Release/dht22.elf"   $(LINK_OBJ) $(AR)  "E:/eclipse/workspace/git/dht22/Release/arduino.ar" "-LE:/eclipse/workspace/git/dht22/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

dht22.eep: $(ELF)
	@echo 'Create eeprom image'
	"E:\Arduino\hardware\tools\avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "E:/eclipse/workspace/git/dht22/Release/dht22.elf" "E:/eclipse/workspace/git/dht22/Release/dht22.eep"
	@echo 'Finished building: $@'
	@echo ' '

dht22.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"E:\Arduino\hardware\tools\avr/bin/avr-objcopy" -O ihex -R .eeprom  "E:/eclipse/workspace/git/dht22/Release/dht22.elf" "E:/eclipse/workspace/git/dht22/Release/dht22.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(C_DEPS)$(AR)$(EEP)$(FLASH_IMAGE)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(ASM_DEPS)$(INO_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(ELF)$(CPP_DEPS) dht22
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
