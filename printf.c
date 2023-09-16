#include "main.h"

/**
* _printf - print clone
* @format: constant string literal
* 
* Return: 0 Success
*/

int _printf(const char *format, ...)
{
	va_list check_list;
	int i, j = 0;
	char c;

	va_start(check_list, format);
	for(i = 0; format[i] != '\0'; i++)
	{
		i++;
		switch(format[i])
		{
			/* add case statements */
		}
	}
	va_end(check_list);
	_putchar('\n');
	return (0);
}
