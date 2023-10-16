#include "main.h"
#include <stdarg.h>

/**
 * print_an_octal - the function name
 * @args: the arguments
 * Return: Nothing
 */
void print_an_octal(va_list args)
{

	unsigned int number, num_length, base = 8, index;
	char *dest;
	char *octal;

	number = va_arg(args, unsigned int);
	num_length = get_length_of_octal(number);
	dest = malloc(sizeof(char) * num_length);
	if (dest == NULL)
	{
		free(dest);
		return;
	}
	octal = _itoa_unsign(number, dest, base);
	for (index = 0; index < _strlen(octal); index++)
	{
		_putchar(*(octal + index));
	}
	free(dest);
}

/**
 * print_a_hex_small - the function name
 * @args: The varaible argument
 * Return: Nothing
 */
void print_a_hex_small(va_list args)
{
	unsigned int number, num_length, base = 16, index;
	char *dest;
	char *hex;

	number = va_arg(args, unsigned int);
	num_length = get_length_of_hex(number);
	dest = malloc(sizeof(char) * num_length);
	if (dest == NULL)
	{
		free(dest);
		return;
	}
	hex = _itoa_unsign(number, dest, base);
	for (index = 0; index < _strlen(hex); index++)
	{
		_putchar(*(hex + index));
	}
	free(dest);
}

/**
 * print_a_hex_cap - the function name
 * @args: The varaible arguments
 * Return: Nothing
 */
void print_a_hex_cap(va_list args)
{
	unsigned int number, num_length, base = 16, index;
	char *dest;
	char *hex;

	number = va_arg(args, unsigned int);
	num_length = get_length_of_hex(number);
	dest = malloc(sizeof(char) * num_length);
	if (dest == NULL)
	{
		free(dest);
		return;
	}
	hex = _itoa_unsigned_cap(number, dest, base);
	for (index = 0; index < _strlen(hex); index++)
	{
		_putchar(*(hex + index));
	}
	free(dest);
}

/**
 * print_a_percent - The function name
 * @c: the variable arguments
 * Return: Nothing
 */
void print_a_percent(char c)
{
	_putchar(c);
}

/**
 * print_letter - the function name
 * @c: The argument
 * Return: Nothing
 */
void print_letter(char c)
{
	_putchar(c);
}
