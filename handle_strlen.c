#include "main.h"

/**
 * _strlen - The name of the function
 * @str: The string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}
