#ifndef USART_PRINTF_H
#define USART_PRINTF_H
#include <stdio.h>

void usart_send_byte(char byte, FILE *stream);
char usart_get_byte(FILE *stream);
void usart_initialize(void);

FILE uart_output = FDEV_SETUP_STREAM(usart_send_byte, NULL, _FDEV_SETUP_WRITE);
FILE uart_input = FDEV_SETUP_STREAM(NULL, usart_get_byte, _FDEV_SETUP_READ);

#endif
