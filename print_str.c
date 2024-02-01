#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)

{
	int a;

	for (c = 0; s[a] != 0; a++)
		;

	return (a);
}


/**
 * _strlenc - length of string for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)

{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);
}
