#include "main.h"

int (*select_function(const char *ch))(va_list)
{
	unsigned int i;
	
	func func_ptr[] =
	{
		{"c", print_char},
		{"s", print_str}
	};

	for (i = 0; func_ptr[i].c != NULL; i++)
	{
		if (*(func_ptr[i].c) == *ch)
		{
			return (func_ptr[i].ptr);
		}
	}

	return (NULL);
}
