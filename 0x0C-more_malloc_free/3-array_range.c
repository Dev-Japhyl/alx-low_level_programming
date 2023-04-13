#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */

int *array_range(int min, int max)
{
	int *res, length, i = 0, num = min;

	if (min > max)
		return (NULL);

	length  = (max - min) + 1;

	res = malloc(length * sizeof(int));

	if (res == NULL)
		return (NULL);

	while (num <= max)
	{
		res[i] = num;
		i++;
		num++;
	}

	return (res);
}

