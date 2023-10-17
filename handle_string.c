#include "main.h"

/**
 * print_a_string - The function name
 * @args: The variable number of argument
 * Return: The length of the string printed to the STDOUT
 */
int print_a_string(va_list args)
{
	int index, length;
	char *string, *empty = "(null)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = empty;
		length = _strlen(string);
		for (index = 0; index < length; index++)
			_putchar(*(string + index));
		return (length);
	}
	else
	{
		length = _strlen(string);
		for (index = 0; index < length; index++)
			_putchar(*(string + index));
		return (length);
	}
}
