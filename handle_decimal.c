#include "main.h"

/**
 * print_a_decimal - The function prints the decimal
 * @args: The list of arguments given to the function
 * Return: number of characters printed to the STDOUT
 */
int print_a_decimal(va_list args)
{
	int decimal, index = 0, change_sign = -1;

	decimal = va_arg(args, int);
	if (decimal < 0)
	{
		_putchar(45);
		decimal *= change_sign;
		index++;
	}

	if (decimal == 0)
	{
		_putchar(48);
		return (index + 1);
	}

	if (decimal / 10)
		index += print_a_decimal_rec(decimal / 10);

	_putchar(decimal % 10 + 48);
	return (index + 1);
}

/**
 * print_a_decimal_rec - handles the checking of the
 * decimal by recursion
 * @number: number to be printed
 * Return: number of characters that is printed to the STDOUT
 */
int print_a_decimal_rec(int number)
{
	int index = 0;

	if (number == 0)
		return (0);

	if (number / 10)
		index += print_a_decimal_rec(number / 10);

	_putchar(number % 10 + 48);
	return (index + 1);
}
