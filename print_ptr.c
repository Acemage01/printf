#include "main.h"

/**
 * print_ptr - prints a pointer
 * @par: parameters
 * Return: counter
 *
 */

int print_ptr(va_list par)
{
	void *g;
	char *h = "(nil)";
	long int a;
	int b;
	int c;

	g = va_arg(par, void*);
	if (g == NULL)
	{
		for (c = 0; h[c] != '\0'; c++)
		{
			_putchar(h[c];
		}
		return (c)
	}

	a = (unsigned long int)g;
	_putchar('0');
	_putchar('x');
	b = print_hex_1(a);
	return (b + 2);
}
