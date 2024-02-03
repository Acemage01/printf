#include "main.h"

/**
 * print_octal - prints an octal number
 * @par: parameters
 * Return: counter
 *
 */

int print_octal(va_list par)

{
	int a;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(par, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for  (a = 0; a < counter; a++)
	{
		array[a] = temp % 8;
		temp = temp / 8;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
