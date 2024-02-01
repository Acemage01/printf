#include "main.h"

/**
 * _strlen - prints the length of a string
 * @str: string
 * Return: integer
 */

int _strlen(char *str)

{
	int a;

	for (c = 0; str[a] != 0; a++)
		;

	return (a);
}


/**
 * _strlenc - length of string for constant characters
 * @str: string
 * Return: integer
 */

int _strlenc(const char *str)

{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
