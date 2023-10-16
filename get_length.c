#include "main.h"

/**
 * _strlen - The name of the function
 * @str: The string
 * Return: the length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * get_length_of_number - the function name
 * @number: the number
 * Return: The length of the number
 */
int get_length_of_number(int number)
{
	int index = 0;

	if (number == 0)
		return (1);
	if (number < 0)
	{
		number *= -1;
		index++;
	}
	while (number != 0)
	{
		index++;
		number /= 10;
	}
	return (index);
}

/**
 * get_length_of_binary - the function name
 * @number: the number
 * Return: The length of the integer for binary
 */
int get_length_of_binary(int number)
{
	int index = 0;

	if (number == 0)
		return (1);
	if (number < 0)
	{
		index++;
		number *= -1;
	}
	while (number != 0)
	{
		index++;
		number /= 2;
	}
	return (index);
}

/**
 * get_length_of_size_t - The function name
 * @number: the unsigned integer
 * Return: The length of the number
 */
unsigned int get_length_of_size_t(unsigned int number)
{
	unsigned int index = 0;

	if (number == 0)
		return (1);
	while (number != 0)
	{
		index++;
		number /= 10;
	}
	return (index);
}

/**
 * get_length_of_octal - The function name
 * @number: The integer
 * Return: The length of the number
 */
unsigned int get_length_of_octal(unsigned int number)
{
	unsigned int index = 0;

	if (number == 0)
		return (1);
	while (number != 0)
	{
		index++;
		number /= 8;
	}
	return (index);
}
