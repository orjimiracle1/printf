#include "main.h"
#include <stdarg.h>

/**
 * print_a_char - The function that prints a character
 * @args: The variable number of argumnets
 * Return: Nothing
 */
void print_a_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
}

/**
 * print_a_string - The function name
 * @args: The variable number of argument
 * Return: Nothing
 */
void print_a_string(va_list args)
{
	char *str;
	int length, index;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (index = 0; index < length; index++)
			_putchar(*(str + index));
	}
	else
	{
		length = _strlen(str);
		for (index = 0; index < length; index++)
			_putchar(*(str + index));
	}
}

/**
 * print_signed_integer - The function that prints the decimal
 * @args: The arguments
 * Return: void
 */
void print_signed_integer(va_list args)
{
	unsigned int integer, index = 0;
	char *i_to_string;
	char *dest;
	int length_of_number, base = 10;

	integer = va_arg(args, int);
	length_of_number = get_length_of_number(integer);
	dest = malloc(sizeof(char) * length_of_number);
	if (dest == NULL)
	{
		free(dest);
		return;
	}
	i_to_string = _itoa(integer, dest, base);
	for (index = 0; index < _strlen(i_to_string); index++)
	{
		_putchar(*(i_to_string + index));
	}
	free(dest);
}

/**
 * print_a_binary - the function name
 * @args: The variable arguments
 * Return: Nothing
 */
void print_a_binary(va_list args)
{
	char *binary;
	unsigned int hold_num, num_length, base = 2, index;
	char *dest;

	hold_num = va_arg(args, int);
	num_length = get_length_of_binary(hold_num);
	dest = malloc(sizeof(char) * num_length);
	if (dest == NULL)
	{
		free(dest);
		return;
	}
	binary = _itoa(hold_num, dest, base);
	for (index = 0; index < _strlen(binary); index++)
	{
		_putchar(*(binary + index));
	}
	free(dest);
}

/**
 * print_an_unsigned_integer - The function name
 * @args: The variable argumnets
 * Return: Nothing
 */
void print_an_unsigned_integer(va_list args)
{
	unsigned int number, num_length, base = 10, index;
	char *dest;
	char *unsign_inte;

	number = va_arg(args, unsigned int);
	num_length = get_length_of_size_t(number);
	dest = malloc(sizeof(char) * num_length);
	if (dest == NULL)
	{
		free(dest);
		return;
	}
	unsign_inte = _itoa_unsign(number, dest, base);
	for (index = 0; index < _strlen(unsign_inte); index++)
	{
		_putchar(*(unsign_inte + index));
	}
	free(dest);
}
