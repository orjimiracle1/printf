#include "main.h"
/**
 * _printf - The function implements the functionality of printf
 * @format: The format of the input to be formatted
 * Return: The length of the string printed to the STDOUT
 */
int _printf(const char *format, ...)
{
	int spec_index, index = 0, length = 0, found_match;

	find_function spec[] = {

	    {"%c", print_a_char}, {"%s", print_a_string}, {"%%", print_a_percent}};

	va_list args;

	va_start(args, format);
	if (format == NULL || (*(format + 0) == '%' && *(format + 1) == '\0'))
		return (-1);

	while (*(format + index) != '\0')
	{
		spec_index = 2;
		found_match = 0;
		while (spec_index >= 0)
		{
			if ((spec + spec_index)->specifier[0] == *(format + index)
					&& (spec + spec_index)->specifier[1] == *(format + (index + 1)))
			{
				length += (spec + spec_index)->fun(args);
				index = index + 2;
				found_match = 1;
				break;
			}
			spec_index--;
		}
		if (!found_match)
		{
			_putchar(*(format + index));
			length++;
			index++;
		}
	}
	va_end(args);
	return (length);
}

