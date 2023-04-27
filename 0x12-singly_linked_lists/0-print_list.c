#include "lists.h"

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * If str is NULL, print [0] (nil)
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		if (h != NULL)
		{
			if (h->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			counter++;
		}
	}

	return (counter);
}

