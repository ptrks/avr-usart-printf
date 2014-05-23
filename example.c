#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
#include "usart_printf/usart_printf.h"

#define FAULT_VCC_SHORT 3
#define FAULT_GND_SHORT 2
#define FAULT_OPEN_CONN 1
#define NO_FAULT 		0

int main(void) {

	usart_initialize();
	stdout = &uart_output;
	_delay_ms(10);
	
	for(;;) {

		printf("Hello AVR printf");
		_delay_ms(1000);
	}


}


