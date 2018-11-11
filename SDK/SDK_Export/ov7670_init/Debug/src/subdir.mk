################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/sccb.c \
../src/ov7670_eval_camera.c \
../src/platform.c 

LD_SRCS += \
../src/lscript.ld 

OBJS += \
./src/main.o \
./src/sccb.o \
../src/ov7670_eval_camera.o \
./src/platform.o 

C_DEPS += \
./src/main.d \
./src/sccb.d \
../src/ov7670_eval_camera.d \
./src/platform.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: PowerPC gcc compiler
	powerpc-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../xps_tft_test_run_bsp/ppc440_0/include -mcpu=440 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo Finished building: $<
	@echo ' '


