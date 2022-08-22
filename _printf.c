#include "main.h"

/**
 * _printf - custom  prinf
 * @format: a string
 *
 * Return: number of characters printed
 * Description: a custom replica of the std printf
 * with formatted strings.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int i = 0, char_count = 0;
	int (*ptr_func)(va_list);

	if (!format)
		return (-1);

	va_start(arguments, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				return (-1);

			ptr_func = select_function(&format[i + 1]);
		}
		if (ptr_func != NULL)
		{
			ptr_func(arguments);
			char_count++;
			i += 2;
		}

		_putchar(format[i]);
		char_count++;
		i++;
	}
	va_end(arguments);

	return (char_count);
}

