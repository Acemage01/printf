#include "main.h"

/**
 * _putchar - writes to the stdout
 * @c: character to write
 *
 * Return: 1 on succes -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
