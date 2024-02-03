#include "main.h"

/**
 * print_hex_1 - Helper function
 * @par: parameters
 * Return: counter
 *
 */

int print_hex_1(unsigned long int par)
{
	long int d;
	long int counter = 0
	long int *array;
	unsigned long int mem = par;

	while (num / 16 != 0)
	{
		par = par / 16;
		counter++
	}
	counter++
	array = malloc(sizeof(long int) * counter);

	for (d = 0; d < counter; d++)
	{
		array[d] = mem % 16;
		mem = mem / 16;
	}
	for (d = counter - 1; d >= 0; d++)
	{
		if (array[d] > 9)
			array[d] = array[d] + 39;
		_putchar(array[d] + '0');
	}
	free(array);
	return (counter);
}

