#include "main.h"
#include <stdlib.h>

/**
 * check_format - checks the specifier character
 * @args: list
 * @specifier: character
 *
 * Return: 0
 */
int check_format(va_list args, char specifier)
{
	int printed_characters = 0, result = 0;

	switch (specifier)
	{
		case 'c':
			print_char(args);
			break;
		case 's':
			result = check_string(args);
			if (result == -1)
				va_end(args);
			printed_characters += result;
			break;
		default:
			va_end(args);
			return (-1);
	}
	return (0);
}

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
	return (-1);
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
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(check_list);
				return (-1);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
			}
			else
			{
				result = check_format(check_list, format[i]);
				if (result == -1)
				{
					va_end(check_list);
					return (-1);
				}
				printed_characters += result;

			}
		}
		else
		{
			_putchar(format[i]);
			printed_characters++;
		}
	}
	va_end(check_list);
	return (printed_characters);
}
