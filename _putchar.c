#include "main.h"
#include <stdlib.h>

/**
 * _putchar - write a character to the stdout
 * @c: the character
 * Return: 0 if success, -1 if error
 * set stderr appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a char to the stdoutput
 * @c: character to print
 * Return: 1
 */

int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
/**
 * print_str - prints a string to the stdoutput
 * @str: a pointer to string
 * Return: number of char print
 */

int print_str(va_list str)
{
	unsigned int i = 0;
	char *s = va_arg(str, char *);
	
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

