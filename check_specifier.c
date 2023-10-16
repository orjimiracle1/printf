#include "main.h"

/**
 * check_specifier - The function checks for the specifier
 * @next_char: The specifier to be checked
 * @another_char: The next character after next_char
 * Return: Nothing
 */
void check_specifier(char next_char, char another_char)
{
	char octal = '0', *hex = "0x", *hex_cap = "0X";

	if (next_char == '+')
		print_a_plus(next_char);
	else if (next_char == ' ')
		handle_space(next_char);
	else if (next_char == '#')
	{
		if (another_char == 'o')
		{
			_putchar(octal);
		}
		else if (another_char == 'x')
		{
			while (*hex)
			{
				_putchar(*hex);
				hex++;
			}
		}
		else if (another_char == 'X')
		{
			while (*hex_cap)
			{
				_putchar(*hex_cap);
				hex_cap++;
			}
		}
	}
}
