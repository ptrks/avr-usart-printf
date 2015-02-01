#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
#include "usart_printf/usart_printf.h"

int main(void) {
    usart_initialize();
	stdout = &uart_output;
	_delay_ms(10);
	for(;;) {
		printf("Hello AVR printf");
		_delay_ms(1000);
	}
}


