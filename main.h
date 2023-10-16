#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
unsigned int _strlen(const char *str);
void print_a_char(va_list args);
void print_a_string(va_list args);
void print_signed_integer(va_list args);
char *_itoa(int number, char *str, int base);
int get_length_of_number(int number);
void _str_reverse(char *str, int index);
void print_a_binary(va_list args);
int get_length_of_binary(int number);
void print_an_unsigned_integer(va_list args);
unsigned int get_length_of_size_t(unsigned int number);
char *_itoa_unsign(unsigned int number, char *str, unsigned int base);
void print_an_octal(va_list args);
unsigned int get_length_of_octal(unsigned int number);
void print_a_hex_small(va_list args);
unsigned int get_length_of_hex(unsigned int number);
void print_a_hex_cap(va_list args);
char *_itoa_unsigned_cap(unsigned int number, char *str, unsigned int base);
void print_a_percent(char c);
void print_letter(char c);
void prints(va_list args, char c);
void print_non_printable_char(va_list args);
void print_address(va_list args);
unsigned int get_length_of_pointer(unsigned long int number);
char *_itoa_unsign_pointer(unsigned long int number, char *str,
			   unsigned int base);
void print_a_plus(char c);
void handle_space(char next_char);
void check_specifier(char next_char, char another_char);

#endif
