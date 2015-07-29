##Makefile usage
#target: dependencies
#[tab]system command

FLAGS=-O0 -g3 -fmessage-length=0

all:
	msp430-gcc -mmcu=msp430g2553 -L /usr/msp430/include $(FLAGS) $$(echo *.c) -o output
	
clean:
	rm output
	
	

