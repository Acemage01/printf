#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <starg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printc(va_list let);
int prints(va_list let);

/**
 * _strlen - finds the length of a string
 * _strlenc - finds the length of a constant string
 *
 */

int _strlen(char *s);
int _strlenc(const char *s);

int _putchar(char c);
int print_37(void);
#endif
