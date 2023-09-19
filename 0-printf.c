#include "main.h"

/**
* _printf - print clone
* @format: constant string literal
* Return: 0 Success
*/

int _printf(const char *format, ...)
{
	va_list check_list;
	int i, result = 0;
	/*int digit;*/


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
				result += _putchar('%');
			}
			else
			{
				switch (format[i])
				{
				case 'c':
					result += print_char(check_list);
					break;
				case 's':
					result += check_string(check_list);
					if (result == -1)
					{
						va_end(check_list);
					}
					break;
<<<<<<< HEAD
				default:
					va_end(check_list);
					return (-1);
=======
>>>>>>> 54fe754 (Refactored code for Betty)
				}
			}
		}
		else
		{
			result += _putchar(format[i]);
		}
	}
	va_end(check_list);
	return (result);
}
