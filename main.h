#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - alignment for printf
 * @ph: pointer to specifeir
 * @f: function for specifier
 */

typedef struct format
{
	char *ph;
	int (*f)();
} align;

int _printf(const char *format, ...);
int print_c(va_list let);
int print_s(va_list let);

/**
 * _strlen - finds the length of a string
 * _strlenc - finds the length of a constant string
 * @str: string
 * Return: integer
 *
 */

int _strlen(char *str);
int _strlenc(const char *str);

int _putchar(char c);
int print_37(void);

/**
 * print_int - prints an integer
 * @args: argument
 * Return: integer
 */

int print_int(va_list args)


int print_decimal(va_list args);
int print_binary(va_list par);
int print_unsigned(va_list args);
int print_octal(va_list par);
int print_hex(va_list par);
int print_HEX(va_list par);
int print_hex_1(va_list par);
int print_HEX_1(va_list par);
int print_spe_str(va_list par);
int print_ptr(va_list par);
int print_rev_str(va_list par);
int print_rot13(va_list par);
#endif
