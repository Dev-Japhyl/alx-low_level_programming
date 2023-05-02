#include "lists.h"

/**
 * print_listint - function that prints all the elements of a `listint_t` list.
 * @h: head of the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	unsigned int counter = 0;

	c = h;
	while (c)
	{
		printf("%d\n", c->n);
		counter++;
		c = c->next;
	}
	return (ounter);
}

