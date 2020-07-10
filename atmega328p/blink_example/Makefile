run:
		$ avr-gcc -Os -DF_CPU=16000000 -mmcu=atmega328p -c main.c
		$ avr-gcc -DF_CPU=16000000 -mmcu=atmega328p -o main.elf main.o
		$ avr-objcopy -O ihex main.elf main.hex
		$ avrdude -c usbasp -p atmega328p -U flash:w:main.hex
