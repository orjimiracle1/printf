#include "main.h"

/**
 * _printf - The name of the function
 * @format: The name of the string
 * Return: The number of bytes excluding the null byte
 */
int _printf(const char *format, ...)
{
	unsigned int str_length = 0, str_index = 0, flag = 0;
	char next_char, another_char;
	va_list args;

	if (format == NULL)
		return (-1);
	str_length = _strlen(format);
	va_start(args, format);
	for (str_index = 0; str_index < str_length; str_index++)
	{
		if (*(format + str_index) != '%')
		{
			if (*(format + str_index) == '+')
				print_a_plus(*(format + str_index));
			else
				print_letter(*(format + str_index));
		}
		else if (*(format + str_index) == '%')
		{
			next_char = *(format + (str_index + 1));
			another_char = *(format + (str_index + 2));
			if (next_char == '%')
				flag = 1, print_a_percent(next_char);
			if (next_char == '+' || next_char == ' ' || next_char == '#')
			{
				check_specifier(next_char, another_char), next_char = another_char;
				format++;
			}
			if (next_char == 's' || next_char == 'd' || next_char == 'i' || next_char ==
					'b' || next_char == 'u' || next_char == 'o' || next_char ==
					'x' || next_char == 'X' || next_char == '+' || next_char ==
					'c' || next_char == 'S' || next_char == 'p')
				prints(args, next_char);
			str_index++;
		}
	}
	va_end(args);
	if (flag == 1)
		return (str_length - 1);
	return (str_length);
}
