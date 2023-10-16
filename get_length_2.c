#include "main.h"

/**
 * get_length_of_hex - The function name
 * @number: the number
 * Return: The length of the number
 */
unsigned int get_length_of_hex(unsigned int number)
{
	unsigned int index = 0;

	if (number == 0)
		return (1);
	while (number != 0)
	{
		index++;
		number /= 16;
	}
	return (index);
}

/**
 * get_length_of_pointer - The function name
 * @number: The number
 * Return: the length
 */
unsigned int get_length_of_pointer(unsigned long int number)
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

