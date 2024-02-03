#include "main.h"

/**
 * print_hex - prints am hexadecimal number
 * @par: argument
 * Return: counter
 *
 */

int print_hex(va_list par)
{
	int b
	int counter = 0;
	unsigned int num = va_arg(par, unsigned int);
	unsigned int temp = num;
	int *array;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);

	for (b = 0; b < counter; b++)
	{
		array[b] = temp % 16;
		temp = temp / 16;
	}
	for (b = counter - 1; b >= 0; b--)
	{
		if (array[b] > 9
			array[b] = array[b] +39;
		_putchar(array[b] +'0');
	}
	free(array);
	return (counter);
}
