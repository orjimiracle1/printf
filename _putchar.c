#include "main.h"

/**
 * _putchar - The function name
 * @c: The char
 * Return: 1 for success and -1 for not successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

