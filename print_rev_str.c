#include "main.h"

/**
 * print_rev_str - prints string in reverse
 * @par: parameters
 * Return: string
 *
 */

int print_rev_str(va_list par)
{
	char *s = va_args(par, char*);
	int f;
	int g = 0;

	if (s == NULL)
		s = "(null)";
	while (s[g] != '\0')
		g++;
	for (f = g - 1; f >= 0; f--)
		_putchar(s[g]);
	return (h);
}
