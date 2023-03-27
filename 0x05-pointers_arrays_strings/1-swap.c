#include "main.h"

/**
 * swap_int - Function to swap values
 *
 * @a: Value to swap
 * @b: value to swap
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

