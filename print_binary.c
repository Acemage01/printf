#include "main.h"

/**
 * print_binary - prints a binary
 * @par: value
 * Return: integer
 */

int print_binary(va_list par)
{
	int start = 0;
	int count = 0;
	int m, n = 1, o;
	unsigned int num = va_arg(par, unsigned int);
	unsigned int p;

	for (m = 0; m < 32; m++)
	{
		p = ((n << (31 - n)) & num);
		if (p >> (31 - m))
			start = 1;
		if (start)
		{
			b = p >> (31 - m)
			_putchar(o + 48);
			count++
		}
	}
	if (count == 0)
	{
		count++;
		_putchsr('0');
	}
	return (count);
}
