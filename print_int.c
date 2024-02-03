#include "main.h"

/**
 * print_int - prints an integer
 * @args: argument to print
 * Return: integer
 *
 */

int print_int(va_list args)
{
	int a = va_arg(args, int)
	int num, last = a % 10, digit, exp = 1;
	int c = 1;

	a = a / 10
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
		last = -last;
		c++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a
		while (exp > 0)
		{
			digit  = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			c++;
		}
	}
	_putchar(last + '0');

	return (c);
}


/**
 * print_decimal - prints a decimal
 * @args: argument to print
 * Return: integer
 *
 */

int print_decimal(va_list args)
{
	int a = va_arg(args, int);
	int num, last = a % 10, digit;
	int c = 1;

	a = a / 10
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
		last = -last;
		c++
	}
	num = a;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0')
		num = num - (digit * exp);
		exp = exp / 10;
		c++;
	}
	_putchar(last + '0');

	return (c);
}
