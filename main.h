#ifndef MAIN_H
#define MAIN_H


int _printf(const char *format, ...);
int print_c(va_list let);
int print_s(va_list let);

/**
 * _strlen - finds the lengith of a string
 * _strlenc - finds the length of a constant string
 * @str: string to find length
 * Return: integer
 *
 */

int _strlen(char *str);
int _strlenc(const char *str);

int _putchar(char c);
int print_37(void);
#endif
