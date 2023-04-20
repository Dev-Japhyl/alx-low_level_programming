#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: the number of integers passed to the function
 * @separator: is the string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(string);
	printf("\n");
}

