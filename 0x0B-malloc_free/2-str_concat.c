#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *result, *_s1 = s1, *_s2 = s2;
	unsigned int i = 0, s1_len = 0, s2_len = 0;

	_s1 = (s1 == NULL) ? "" : s1;
	_s2 = (s2 == NULL) ? "" : s2;

	while (_s1[s1_len] != '\0')
		s1_len++;

	while (_s2[s2_len] != '\0')
		s2_len++;

	s2_len++;

	result = malloc((s1_len + s2_len) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = _s1[i];

	for (i = 0; i < s2_len; i++)
		result[i + s1_len] = _s2[i];

	return (result);
}

