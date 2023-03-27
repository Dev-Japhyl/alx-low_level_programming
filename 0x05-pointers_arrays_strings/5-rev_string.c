#include "main.h"

/**
 * rev_string - Function that reverse a string.
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i, c;
	char l;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--, c = 0; c < l / 2; i--, c++)
	{
		l = s[c];
		s[c] = s[i];
		s[i] = l;
	}
}

