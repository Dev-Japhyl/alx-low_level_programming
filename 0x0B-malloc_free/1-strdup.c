#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *result;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	len++;

	result = malloc(len * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		result[i] = str[i];

	return (result);
}

