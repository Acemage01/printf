#include "main.h"

/**
 * printc - prints a character
 * @let: argument
 * Return: 1
 */

int printc(va_list let)
{
	char c

	c = va_arg(let, int);
	_putchar(c);
	return (1);
}
