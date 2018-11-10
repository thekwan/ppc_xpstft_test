################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
ELFSIZE += \
sccb_ip_test.elf.size \

ELFCHECK += \
sccb_ip_test.elf.elfcheck \


# All Target
all: sccb_ip_test.elf secondary-outputs

# Tool invocations
sccb_ip_test.elf: $(OBJS) ../src/lscript.ld $(USER_OBJS)
	@echo Building target: $@
	@echo Invoking: PowerPC gcc linker
	powerpc-eabi-gcc -Wl,-T -Wl,../src/lscript.ld -L../../xps_tft_test_run_bsp/ppc440_0/lib -mcpu=440 -o"sccb_ip_test.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo Finished building target: $@
	@echo ' '

sccb_ip_test.elf.size: sccb_ip_test.elf
	@echo Invoking: PowerPC Print Size
	powerpc-eabi-size sccb_ip_test.elf  |tee "sccb_ip_test.elf.size"
	@echo Finished building: $@
	@echo ' '

sccb_ip_test.elf.elfcheck: sccb_ip_test.elf
	@echo Invoking: Xilinx ELF Check
	elfcheck sccb_ip_test.elf -hw ../../ppc_xpstft_test_hw_platform/system.xml -pe ppc440_0  |tee "sccb_ip_test.elf.elfcheck"
	@echo Finished building: $@
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES)$(ELFSIZE)$(ELFCHECK)$(S_UPPER_DEPS) sccb_ip_test.elf
	-@echo ' '

secondary-outputs: $(ELFSIZE) $(ELFCHECK)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
