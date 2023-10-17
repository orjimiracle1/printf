#include "main.h"

/**
 * print_a_binary - The function prints a binary
 * @args: The variable list of argumants
 * Return: the number of bytes printed to the STDOUT
 */
int print_a_binary(va_list args)
{
	unsigned int binary;
	int index = 0;

	binary = va_arg(args, unsigned int);
	if (binary == 0)
	{
		_putchar(48);
		index = 1;
	}
	else
	{
		index = print_a_binary_rec(binary);
	}

	return (index);
}

/**
 * print_a_binary_rec - The function is a recursive that prints the
 * binary
 * @number: The number to be converted to binary
 * Return: Number of bytes printed to the STDOUT
 */
int print_a_binary_rec(unsigned int number)
{
	int index = 0;

	if (number == 0)
	{
		return (0);
	}

	index += print_a_binary_rec(number >> 1);
	_putchar((number & 1) + '0');
	return (index + 1);
}
