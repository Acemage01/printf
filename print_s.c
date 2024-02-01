#include "main.h"

/**
 * print_s - print a string
 * @let: argument
 * Return: length of string
 */

int print_s(va_list let)
{
	char *str;
	int a;
	int len;

	str = va_arg(let, char *)
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (a = 0; a < len; a++)
			_putcahr(str[a]);
		return (len);
	}
}
