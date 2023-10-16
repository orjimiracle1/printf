#include "main.h"
#include <stdarg.h>

/**
 * print_non_printable_char - The function name
 * @args: The arguments
 * Return: Nothing
 */
void print_non_printable_char(va_list args)
{
	char *non_print;
	char *hex_cap;
	char *dest;
	unsigned int index = 0;
	unsigned int hex_length, i;
	int c;

	non_print = va_arg(args, char *);
	for (index = 0; index < _strlen(non_print); index++)
	{
		c = *(non_print + index);
		if ((c >= 0 && c < 32) || c >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			hex_length = get_length_of_hex(c);
			dest = malloc(sizeof(char) * hex_length);
			if (dest == NULL)
			{
				free(dest);
				return;
			}
			hex_cap = _itoa_unsigned_cap(c, dest, 16);
			for (i = 0; i < _strlen(hex_cap); i++)
			{
				_putchar(*(hex_cap + i));
			}
		}
		else
			_putchar(c);
	}
	free(dest);
}

/**
 * print_address - The function name
 * @args: The argument
 * Return: Nothing
 */
void print_address(va_list args)
{
	void *ptr;
	char *nothing = "(nill)";
	unsigned int index = 0, hex_length, base = 16, i = 0;
	char *dest;
	char *addr;
	unsigned long int a;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		for (index = 0; *(nothing + index) != '\0'; index++)
		{
			_putchar(*(nothing + index));
		}
		return;
	}
	_putchar('0');
	_putchar('x');
	a = (unsigned long int)ptr;
	hex_length = get_length_of_pointer(a);
	dest = malloc(sizeof(char) * hex_length);
	addr = _itoa_unsign_pointer(a, dest, base);
	for (i = 0; i < hex_length; i++)
	{
		_putchar(*(addr + i));
	}
	free(dest);
}

/**
 * print_a_plus - prints a plus sign
 * @c: the character
 * Return:Nothing
 */
void print_a_plus(char c)
{
	_putchar(c);
}

/**
 * handle_space - The function that handles space
 * @next_char: The space to be printed
 * Return: Nothing
 */
void handle_space(char next_char)
{
	print_letter(next_char);
}

