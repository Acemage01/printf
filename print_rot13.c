#include "main.h"

/**
 * print_rot13 - print in rot13
 * @par: parameters
 * Return: counter
 *
 */

int print_rot13(va_list par)
{
	int f, g, counter = 0;
	int e = 0;
	char *str = va_arg(par, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (f = 0; str[f]; f++)
	{
		e = 0;
		for (g = 0; al[g] && !e; g++)
		{
			if (str[f] == al[g])
			{
				_putchar(bl[g];
				counter++
				e = 1;
			}
		}
		if (!e)
		{
			_putchar(str[f]);
			counter++;
		}
	}
	return (counter);
}
