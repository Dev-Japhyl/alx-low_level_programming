#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *response;
	unsigned int lenS1, lenS2, a, b;

	lenS1 = 0, lenS2 = 0, a = 0;
	if (s1)
	{
		while (s1[a++])
			lenS1++;
	}

	a = 0;
	if (s2)
	{
		while (s2[a++])
			lenS2++;
	}

	if (lenS2 > n)
		lenS2 = n;

	response = malloc(sizeof(char) * (lenS1 + lenS2 + 1));

	if (!response)
		return (NULL);

	for (a = 0; a < lenS1; a++)
		response[a] = s1[a];

	for (b = 0; b < lenS2; b++, a++)
		response[a] = s2[b];

	response[a] = '\0';
	return (response);
}

