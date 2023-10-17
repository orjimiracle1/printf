#include "main.h"
#include <stdarg.h>

/**
 * print_a_char - The function that prints a character
 * @args: The variable number of argumnets
 * Return: Number of character printed to the STDOUT
 */
int print_a_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
