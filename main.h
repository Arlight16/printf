#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct print_ch
{
	char *c;
	int (*ptr)(va_list);
} func;

int _printf(const char *format, ...);
int _putchar(char c);
int (*select_function(const char *ch))(va_list);
int print_char(va_list c);
int print_str(va_list str);

#endif
