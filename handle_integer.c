#include "main.h"

/**
 * print_an_integer - The function prints an integer
 * @args: The variable list of argument
 * Return: The number of characters printed to the STDOUT
 */
int print_an_integer(va_list args)
{
	int integer, index = 0, change_sign = -1;

	integer = va_arg(args, int);
	if (integer < 0)
	{
		_putchar(45);
		integer *= change_sign;
		index++;
	}

	if (integer == 0)
	{
		_putchar(48);
		return (index + 1);
	}

	if (integer / 10)
		index += print_an_integer_rec(integer / 10);

	_putchar(integer % 10 + 48);
	return (index + 1);
}

/**
 * print_an_integer_rec - handles the checking of the
 * integer by recursion
 * @number: The number to be printed
 * Return: The number of characters that is printed to the STDOUT
 */
int print_an_integer_rec(int number)
{
	int index = 0;

	if (number == 0)
		return (0);

	if (number / 10)
		index += print_an_integer_rec(number / 10);

	_putchar(number % 10 + 48);
	return (index + 1);
}
