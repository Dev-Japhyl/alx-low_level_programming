#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);
	if (allocated == NULL)
		exit(98);

	return (allocated);
}

