#include "main.h"

/**
 * * print_char - prints the character
 * * @args: list
 * *
 * * Return: integer
 * */
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
		if (count <= 0)
	{
		va_end(args);
	}
	return (count);
}
