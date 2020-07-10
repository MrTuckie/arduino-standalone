
# My first makefile

# make (all, implicitamente) (ou só make, eu acho) chama o 'main' pra buildar

all: main
# logo em cima, chama o de baixo
# aí o main vai chamar os arquivos de baixo e buildar
main: main.o app_led.o app_button.o
	avr-gcc -DF_CPU=16000000 -mmcu=atmega328p -o main.elf main.o app_led.o app_button.o
	avr-objcopy -O ihex main.elf main.hex
	avrdude -c usbasp -p atmega328p -U flash:w:main.hex
# but pera aí, não existem ainda esses arquivos! chamem o main.c e o app_led.h
# para buildarem!

main.o: main.c app_led.h app_button.h
	avr-gcc -Os -DF_CPU=16000000 -mmcu=atmega328p -c main.c

app_led.o: app_led.c app_led.h
	avr-gcc -Os -DF_CPU=16000000 -mmcu=atmega328p -o app_led.o app_led.c -c

app_button.o: app_button.c app_button.h
	avr-gcc -Os -DF_CPU=16000000 -mmcu=atmega328p -o app_button.o app_button.c -c


# make clean chama essa parte aqui e executa o comando logo abaixo
clean:
	rm -rf *.o *~ main 


		