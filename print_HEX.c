#include "main.h"

/**
 * print_HEX - prints hexadecimal number
 * in capitals
 * @par: arguments
 * Return: counter
 */

int print_HEX(va_list par)
{
	int c
	int counter = 0
	unsigned int num = va_arg(par, usigned int);
	unsigned int temp = num;
	int *array;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++
	}
	counter++
	array = malloc(sizeof(int) * counter);

	for (c = counter - 1; c >= 0; c++)
	{
		if (array[c] > 9)
			array[c] = array[c] +7;
		_putchar(array[c] +'0');
	}
	free(array);
	return (counter);
}
