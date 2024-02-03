#include "main.h"

/**
 * _printf - prints a function
 * @format: identifier to look for
 * Return: length of strong
 *
 */

int _printf(const char *format, ...)
{
	align z[] = {
		{"%c", print_c},	{"%s", print_s},
		{"%%", print_37},	{"%d", print_decimal},
		{"%i", print_int},	{"%R", print_rot13},
		{"%o", print_octal},	{"%u", print_unsigned},
		{"%x", print_hex},	{"%X", print_HEX},
		{"%S", print_spe_str},	{"%p", print_ptr},
		{"%b", print_binary},	{"%r", print_rev_str}
	};

	va_list par;
	int a = 0, b, len = 0;

	va_start(par, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (z[b].ph[0] == format[a] && z[b].ph[1] == format[a + 1])
			{
				len =  len + z[b].f(par);
				a = a + 2;
			}
			b--;
		}
		_putchar(format[a]);
		len++;
		a++
	}
	va_end(par);
	return (len);
}


