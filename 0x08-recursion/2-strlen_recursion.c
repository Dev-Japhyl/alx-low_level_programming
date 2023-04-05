#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: String
 * Return: the lenght of a string
 */

int _strlen_recursion(char *s)
{
	int j;

	j = 0;
	if (*s == '\0')
		return (0);

	j = 1 +  _strlen_recursion(s + 1);

	return (j);
}

