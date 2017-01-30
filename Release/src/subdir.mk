################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/lib_draw.c \
../src/main.c \
../src/syscalls.c \
../src/system_stm32f4xx.c 

OBJS += \
./src/lib_draw.o \
./src/main.o \
./src/syscalls.o \
./src/system_stm32f4xx.o 

C_DEPS += \
./src/lib_draw.d \
./src/main.d \
./src/syscalls.d \
./src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F407VGTx -DSTM32F4 -DSTM32F4DISCOVERY -DSTM32 -DUSE_STDPERIPH_DRIVER -DSTM32F40XX -DSTM32F40_41xxx -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N2/inc" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N2/CMSIS/core" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N2/CMSIS/device" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N2/StdPeriph_Driver/inc" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N2/Utilities" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


