#include "main.h"

/**
 * string_toupper - uppers a lowercase
 *
 * @c: character to make uppercase
 * Return: return value of uppercase
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}

