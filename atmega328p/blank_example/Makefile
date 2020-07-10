roda:
		$ avr-gcc -Os -DF_CPU=16000000 -mmcu=atmega328p -c teste.c
		$ avr-gcc -DF_CPU=16000000 -mmcu=atmega328p -o teste.elf teste.o
		$ avr-objcopy -O ihex teste.elf teste.hex
		$ avrdude -c usbasp -p atmega328p -U flash:w:teste.hex
