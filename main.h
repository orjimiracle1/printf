#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - The struct checks for the specifier and
 * matches if with the function
 * @specifier: The corresponding argument
 * @fun: The function pointer
 *
 */

struct print
{
	char *specifier;
	int (*fun)();
};
typedef struct print find_function;

int _printf(const char *format, ...);
int print_a_char(va_list args);
int print_a_string(va_list args);
int print_a_percent(void);
int _putchar(char c);
int _strlen(char *str);
int print_a_decimal(va_list args);
int print_a_decimal_rec(int number);
int print_an_integer(va_list args);
int print_an_integer_rec(int number);

#endif
