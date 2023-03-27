#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null
 *
 * @src: The string
 * @dest: The destination
 * Return: the string copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

