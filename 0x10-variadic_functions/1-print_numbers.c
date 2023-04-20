#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: the number of integers passed to the function
 * @separator: is the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(nums, int));
	}
	va_end(nums);
	printf("\n");
}

