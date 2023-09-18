#include "main.h"
#include <stdlib.h>

/**
* print_char - prints the character
* @args: list
*
* Return: integer
*/
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
* check_string - checks the contents of your str
* @args: list
*
* Return: length
*/
int check_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		return (-1);
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
/**
* _printf - print clone
* @format: constant string literal
* Return: 0 Success
*/

int _printf(const char *format, ...)
{
	va_list check_list;
	int i, result = 0, printed_characters = 0;


	va_start(check_list, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				result = _putchar('%');
				printed_characters += result;
			}
			else
			{
				switch (format[i])
				{
				case 'c':
					result = print_char(check_list);
					printed_characters += result;
					break;
				case 's':
					result = check_string(check_list);
					if (result == -1)
					{
						va_end(check_list);
					}
					printed_characters += result;
					break;
				default:
					va_end(check_list);
					return (-1);
				}
			}
		}
		else
		{
			_putchar(format[i]);
			printed_characters++;
		}
	}
	va_end(check_list);
	return (printed_characters - 1);
}
