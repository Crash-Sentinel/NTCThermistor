
# AVRDUDE BIN DIRECTORY
AVRDUDE := $(AVRDUDE_FILE_PATH)\avrdude.exe

# AVRDUDE CONFIG DIRECTORY
AVRDUDE_CONF := $(AVRDUDE_CONF_PATH)\avrdude.conf

# ARDUINO CLI DIRECTORY
ARDUINO_CLI := $(ARDUINO_CLI_PATH)\arduino-cli.exe

# MAIN FILE TO BUILD WITH \
  (for some reason, the tools I'm working with like the main.ino to be called src.ino) \
  (I'll see if I can change that sometime in the future)
MAIN := src.ino

# Baud Rate and COM Port Respectively \
  for the Arduino Uno
BAUD_RATE := 115200
COM_PORT_NUM := 4


MARKER_POPULATED := build\.marker_populated

.PHONY = clean

# If any of these error, check your environment variables
test:
	@echo $(ARDUINO_CLI)
	@echo $(AVRDUDE_CONF)
	@echo $(ARDUINO_CLI)

compile:
	$(ARDUINO_CLI) compile --fqbn arduino:avr:uno src\$(MAIN) --output-dir build
	touch $(MARKER_POPULATED)

upload: build\src.ino.hex
	$(AVRDUDE) -C $(AVRDUDE_CONF) -v -patmega328p -carduino -P COM$(COM_PORT_NUM) -b$(BAUD_RATE) -D -Uflash:w:build/src.ino.hex:i

clean: $(MARKER_POPULATED)
	rm -f build/*
	rm -f build/.marker_populated