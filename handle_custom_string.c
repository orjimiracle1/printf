#include "main.h"

/**
 * print_custom_string - The function prints a customised string
 * @args: The variable list of argument
 * Return: The number of bytes printed to the STDOUT
 */
int print_custom_string(va_list args)
{
	int length = 0, index;
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		string = "(null)";

	for (index = 0; *(string + index) != '\0'; index++)
	{
		if (*(string + index) < 32 || *(string + index) >= 127)
		{
			length += print_escape_char(*(string + index));
		}
		else
		{
			_putchar(*(string + index));
			length++;
		}
	}

	return (length);
}

/**
 * print_escape_char - the function prints an escape character
 * for non-printable characters.
 * @escape_c: the character to be printed
 * Return: number of bytes printed for the escape character
 */
int print_escape_char(char escape_c)
{
	int length = 0;

	_putchar(92);
	_putchar(120);
	length += 2;

	if (escape_c < 16)
	{
		_putchar(48);
		length++;
	}

	length += print_hex(escape_c);
	return (length);
}

/**
 * print_hex - convert an integer to a hexadecimal
 * @number: The number to be converted to a hexadecimal
 * Return: number of bytes printed for the hexadecimal representation
 * to STDOUT
 */
int print_hex(int number)
{
	int length = 0;
	char hexa_dec[] = "0123456789ABCDEF";

	if (number > 15)
		length += print_hex(number / 16);

	_putchar(*(hexa_dec + (number % 16)));
	length++;

	return (length);
}
