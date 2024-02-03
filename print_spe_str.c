#include "main.h"

/**
 * print_spe_str - prints special string
 * @par: parameter to print
 * Return: integer
 *
 */

int print_spe_str(va_list par)
{
	char *spe;
	int b, len = 0;
	int parameter;

	spe = va_arg(par, char *);
	if (spe == NULL)
		spe = "(null)";
	for (b = 0; spe[b] != '\0'; b++)
	{
		if (spe[b] < 32 || spe[b] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			parameter = spe[b];
			if (parameter < 16)
			{
				_putchar('0);
				len++
			}
			len = len + print_HEX_1(par);
		}
		else
		{
			_putchar(spe[b]);
			len++
		}
	}
	return (len);
}
