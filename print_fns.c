#include "main.h"

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

	count += print_num(digit);

	return (count);
}

/**
 * print_num - counts input numbers
 * @number: input number
 *
 * Return: 0
 */
int print_num(int number)
{
	int counter = 0;
	char buffer[12];
	int i, index = 0;

	if (number < 0)
	{
		_putchar('-');
		counter++;
		number = -number;
	}
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number != 0)
	{
		buffer[index++] = (number % 10) + '0';
		number = number / 10;
		counter++;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (counter);
}
