################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include mbed/TARGET_DISCO_F469NI/TOOLCHAIN_GCC_ARM/subdir.mk
-include gui/subdir.mk
-include LCD_DISCO_F469NI/subdir.mk
-include BSP_DISCO_F469NI/stm32469i_discovery/subdir.mk
-include BSP_DISCO_F469NI/Fonts/subdir.mk
-include BSP_DISCO_F469NI/Components/otm8009a/subdir.mk
-include BSP_DISCO_F469NI/Components/ft6x06/subdir.mk
-include BSP_DISCO_F469NI/Components/cs43l22/subdir.mk
-include subdir.mk
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
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: DISCO-F469NI_LCD_demo.elf

# Tool invocations
DISCO-F469NI_LCD_demo.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU G++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -L"C:\ARMSPACE\DISCO-F469NI_LCD_demo\mbed\TARGET_DISCO_F469NI\TOOLCHAIN_GCC_ARM" --specs=nano.specs -T"C:\ARMSPACE\DISCO-F469NI_LCD_demo\mbed\TARGET_DISCO_F469NI\TOOLCHAIN_GCC_ARM\STM32F469XI.ld" -Wl,-Map=output.map -Wl,--gc-sections -fno-exceptions -fno-rtti -lm -o "DISCO-F469NI_LCD_demo.elf" @"objects.list" $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	-@echo 'Generating binary and Printing size information:'
	arm-none-eabi-objcopy -O binary "DISCO-F469NI_LCD_demo.elf" "DISCO-F469NI_LCD_demo.bin"
	arm-none-eabi-size -B "DISCO-F469NI_LCD_demo.elf"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
