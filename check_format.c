#include "main.h"

/**
 * prints - The function name
 * @args: the arguments
 * @c: The character
 * Return: nothing
 */
void prints(va_list args, char c)
{
	if (c == 'c')
		print_a_char(args);
	else if (c == 's')
		print_a_string(args);
	else if (c == 'd' || c == 'i')
		print_signed_integer(args);
	else if (c == 'b')
		print_a_binary(args);
	else if (c == 'u')
		print_an_unsigned_integer(args);
	else if (c == 'o')
		print_an_octal(args);
	else if (c == 'x')
		print_a_hex_small(args);
	else if (c == 'X')
		print_a_hex_cap(args);
	else if (c == 'S')
		print_non_printable_char(args);
	else if (c == 'p')
		print_address(args);
}
