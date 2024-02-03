#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: argument to print
 * Return: numer of characters
 *
 */

int print_unsigned(va_list args)
{
	unsigned int a = va_args(args, unsigned int);
	int num, last = a % 10;
	int digit = 1;
	int exp = 1;
	int b  = 1;

	a = a / 10;
	num = a

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a
		lsdt = -last;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			b++
		}
	}
	_putchar(last + '0')

	return (b);
}
