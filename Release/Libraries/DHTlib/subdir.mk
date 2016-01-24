################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/Brady/Documents/Arduino/libraries/DHTlib/dht.cpp 

LINK_OBJ += \
./Libraries/DHTlib/dht.cpp.o 

CPP_DEPS += \
./Libraries/DHTlib/dht.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/DHTlib/dht.cpp.o: C:/Users/Brady/Documents/Arduino/libraries/DHTlib/dht.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"E:\Arduino\hardware\tools\avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"E:\Arduino\hardware\arduino\avr\cores\arduino" -I"E:\Arduino\hardware\arduino\avr\variants\standard" -I"C:\Users\Brady\Documents\Arduino\libraries\DHTlib" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '


