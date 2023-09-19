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

/**
 * check_digit - checks if number is a digit
 *@args: list
 *
 * Return: length
 */

int check_digit(va_list args)
{
	int count = 0;
	int digit = va_arg(args, int);

	count += count_nums(digit);
	_putchar(digit);

	return (count);
}

/**
 * count_nums - counts input numbers
 * @x: number
 *
 * Return: 0
 */
int count_nums(int x)
{
	int i, j = 0;
	
	if (x < 0)
	{
		i = x * -1;
	}
	else
	{
		i = x;
	}
	while (i != 0)
	{
		i = i / 10;
		j++;
	}
	return (j);
}
