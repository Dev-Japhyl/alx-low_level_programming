#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `s`
 */

char *cap_string(char *s)
{
	int i, j;
	char ws[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= ('a' - 'A');
	}
	while (s[i] != '\0')
	{
		for (j = 0; ws[j] != '\0'; j++)
		{
			if (s[i - 1] == ws[j] && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= ('a' - 'A');
			}
		}
		i++;
	}

	return (s);
}

