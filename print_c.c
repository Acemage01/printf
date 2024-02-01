#include "main.h"

/**
 * print_c - prints a character
 * @let: argument
 * Return: 1
 */

int print_c(va_list let)
{
	char c

	c = va_arg(let, int);
	_putchar(c);
	return (1);
}
