MK_DIR = mkdir -p
BUILDDIR =build
LINKER_FILE:=Device_Startup/samb11_sram.ld
OUTPUT_FILE_NAME :=DiveComputer
CC := arm-none-eabi-gcc

INCLUDE_DIRS=. \
Config \
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
sensors

INC_PARAMS=$(INCLUDE_DIRS:%=-I../%)

SOURCES := $(shell find * -name '*.c')
OBJS := $(addprefix $(BUILDDIR)/,$(SOURCES:%.c=%.o))

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf

vpath %.c .
vpath %.s build/
vpath %.S build/

# All Target
all: $(OBJS) $(OUTPUT_FILE_PATH)

# Linker target

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(COMPILER) $(OBJS) -o $(OUTPUT_FILE_NAME).elf -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m0 \
 \
 \
-T"$(LINKER_FILE)" \
-L"."
	@echo Finished building target: $@

	"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin"
	"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  \
        "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" \
        "$(OUTPUT_FILE_NAME).eep" || exit 0
	"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

# Compiler targets


%.o: %.c
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(CC) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMB11G18A__ -mcpu=cortex-m0 $(INC_PARAMS) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	arm-none-eabi-as -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMB11G18A__ -mcpu=cortex-m0 $(INC_PARAMS)  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(CC) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMB11G18A__ -mcpu=cortex-m0 $(INC_PARAMS) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(OBJS):
	$(MK_DIR) $(dir $@)

clean:
	rm -rf $(BUILDDIR)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS)
	rm -rf $(SUB_DIRS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
