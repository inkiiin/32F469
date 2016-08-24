################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../gui/gui.cpp 

OBJS += \
./gui/gui.o 

CPP_DEPS += \
./gui/gui.d 


# Each subdirectory must supply rules for building sources it contributes
gui/%.o: ../gui/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo %cd%
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -D__MBED__=1 -DDEVICE_I2CSLAVE=1 -DTARGET_LIKE_MBED -DDEVICE_PORTINOUT=1 -DTARGET_RTOS_M4_M7 -DDEVICE_RTC=1 -DTOOLCHAIN_object -DTARGET_STM32F4 -D__CMSIS_RTOS -DTOOLCHAIN_GCC -DDEVICE_CAN=1 -DTARGET_CORTEX_M -DTARGET_LIKE_CORTEX_M4 -DDEVICE_ANALOGOUT=1 -DTARGET_M4 -DTARGET_UVISOR_UNSUPPORTED -DTARGET_STM32F469NI -DDEVICE_PWMOUT=1 -DDEVICE_INTERRUPTIN=1 -DMBED_BUILD_TIMESTAMP=1471772304.87 -DDEVICE_I2C=1 -DDEVICE_PORTOUT=1 -D__CORTEX_M4 -DDEVICE_STDIO_MESSAGES=1 -D__FPU_PRESENT=1 -DTARGET_FF_ARDUINO -DDEVICE_PORTIN=1 -DTARGET_RELEASE -DTARGET_STM -DTARGET_STM32F469 -D__MBED_CMSIS_RTOS_CM -DDEVICE_SLEEP=1 -DTOOLCHAIN_GCC_ARM -DDEVICE_SPI=1 -DDEVICE_ERROR_RED=1 -DDEVICE_SPISLAVE=1 -DTARGET_DISCO_F469NI -DDEVICE_ANALOGIN=1 -DDEVICE_SERIAL=1 -DARM_MATH_CM4 -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/." -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/Components" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/Components/Common" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/Components/cs43l22" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/Components/ft6x06" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/Components/n25q128a" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/Components/otm8009a" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/Fonts" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/PDM" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/BSP_DISCO_F469NI/stm32469i_discovery" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/LCD_DISCO_F469NI" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/mbed" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/mbed/TARGET_DISCO_F469NI" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/mbed/TARGET_DISCO_F469NI/TARGET_STM" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/mbed/TARGET_DISCO_F469NI/TARGET_STM/TARGET_STM32F4" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/mbed/TARGET_DISCO_F469NI/TARGET_STM/TARGET_STM32F4/TARGET_DISCO_F469NI" -I"C:/ARMSPACE/DISCO-F469NI_LCD_demo/mbed/TARGET_DISCO_F469NI/TOOLCHAIN_GCC_ARM" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


