#include "main.h"

/**
 * _itoa - The function name
 * @number: The integer
 * @base: The base of the number
 * @str: The string
 * Return: The integer converted to string
 */
char *_itoa(int number, char *str, int base)
{
	int index = 0, track_sign = 0;
	int reminder;

	if (number == 0)
	{
		*(str + index) = '0';
		index++;
		*(str + index) = '\0';
		return (str);
	}
	if (number < 0 && base == 10)
	{
		track_sign = 1;
		number *= -1;
	}
	while (number != 0)
	{
		reminder = number % base;
		*(str + index) = (reminder > 9) ? (reminder - 10) + 'a' : reminder + '0';
		index++;
		number /= base;
	}
	if (track_sign == 1)
	{
		*(str + index) = '-';
		index++;
	}
	*(str + index) = '\0';
	_str_reverse(str, index);
	return (str);
}

/**
 * _itoa_unsign - The function name
 * @number: The integer
 * @str: The string buffer
 * @base: The base of the number
 * Return: The integer converted to string
 */
char *_itoa_unsign(unsigned int number, char *str, unsigned int base)
{
	unsigned int index = 0;
	unsigned int reminder;

	if (number == 0)
	{
		*(str + index) = '0';
		index++;
		*(str + index) = '\0';
		return (str);
	}
	while (number != 0)
	{
		reminder = number % base;
		*(str + index) = (reminder > 9) ? (reminder - 10) + 'a' : reminder + '0';
		index++;
		number /= base;
	}
	*(str + index) = '\0';
	_str_reverse(str, index);
	return (str);
}

/**
 * _itoa_unsigned_cap - the function name
 * @number: the number
 * @str: the memory location to store the value
 * @base: the base of the number
 * Return: A string
 */
char *_itoa_unsigned_cap(unsigned int number, char *str, unsigned int base)
{
	unsigned int index = 0;
	unsigned int reminder;

	if (number == 0)
	{
		*(str + index) = '0';
		index++;
		*(str + index) = '\0';
		return (str);
	}
	while (number != 0)
	{
		reminder = number % base;
		*(str + index) = (reminder > 9) ? (reminder - 10) + 'A' : reminder + '0';
		index++;
		number /= base;
	}
	*(str + index) = '\0';
	_str_reverse(str, index);
	return (str);
}
/**
 * _itoa_unsign_pointer - The name of the function
 * @number: The number
 * @str: The string
 * @base: The base
 * Return: a string
 */
char *_itoa_unsign_pointer(unsigned long int number, char *str,
						   unsigned int base)
{
	unsigned int index = 0;
	unsigned int reminder;

	if (number == 0)
	{
		*(str + index) = '0';
		index++;
		*(str + index) = '\0';
		return (str);
	}
	while (number != 0)
	{
		reminder = number % base;
		*(str + index) = (reminder > 9) ? (reminder - 10) + 'a' : reminder + '0';
		index++;
		number /= base;
	}
	*(str + index) = '\0';
	_str_reverse(str, index);
	return (str);
}

/**
 * _str_reverse - The function name
 * @str: the string
 * @index: the length
 * Return: the reverse string
 */
void _str_reverse(char *str, int index)
{
	int start = 0, end = index - 1;
	char temp;

	while (start < end)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = temp;
		end--;
		start++;
	}
}

