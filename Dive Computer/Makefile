MK_DIR = mkdir -p
BUILDDIR = build
LINKER_FILE:=Device_Startup/samb11_sram.ld
OUTPUT_FILE_NAME := DiveComputer
CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy
ELFSIZE = arm-none-eabi-size
CFLAGS = -x c -mthumb -D__SAMB11G18A__ -DDEBUG \
-std=gnu99 -O0 -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m0
LFLAGS = -LDevice_Startup -TDevice_Startup/samb11_sram.ld

INCLUDE_DIRS="." \
Config \
atmel_start \
Device_Startup \
hal \
hal/include \
hal/utils/include \
hpl/aon_sleep_timer \
hpl/core \
hpl/gpio \
hri \
display \
logging \
sensors \
SAMB11/include \
CMSIS/4.2.0/CMSIS/Include \
CMSIS/4.2.0/CMSIS/Driver/Include

INC_PARAMS=$(INCLUDE_DIRS:%=-I%)

# Excluded path in sources finding important to avoid building template files
SOURCES := $(shell find -name "*.c" ! -path "./CMSIS/*" ! -path "./SAMB11/*")
OBJS := $(addprefix $(BUILDDIR)/,$(SOURCES:%.c=%.o))

OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf

# All Target
all: $(OBJS) $(OUTPUT_FILE_PATH)

# Print variable rule, usage: make print-BLABLA
print-%  : ; @echo $* = $($*)

$(OUTPUT_FILE_PATH): $(MIRRORTREE) $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(CC) -Wfatal-errors -Wl,-Map="Dive Computer.map" -Wl,--start-group -lm  -Wl,--end-group -L"Device_Startup"	-Wl,--gc-sections -mcpu=cortex-m0 -TDevice_Startup/samb11_sram.ld -o $(OUTPUT_FILE_PATH) $(OBJS)
	@echo Finished building target: $@
	$(OBJCOPY) -O ihex -R .eeprom -R .fuse -R .lock -R .signature $(OUTPUT_FILE_NAME).elf $(OUTPUT_FILE_NAME).hex
	$(OBJCOPY) -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O binary $(OUTPUT_FILE_NAME).elf $(OUTPUT_FILE_NAME).eep || exit 0
	$(OBJCOPY) -h -S "Dive Computer.elf" > "Dive Computer.lss"
	$(OBJCOPY) -O srec -R .eeprom -R .fuse -R .lock -R .signature  $(OUTPUT_FILE_NAME).elf $(OUTPUT_FILE_NAME).srec
	$(ELFSIZE) $(OUTPUT_FILE_NAME).elf

$(BUILDDIR)/%.o: %.c
	@$(MK_DIR) $(dir $@)
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(CC) $(CFLAGS) $(INC_PARAMS) -c $< -o $@
	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

clean:
	rm -rf $(BUILDDIR)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
