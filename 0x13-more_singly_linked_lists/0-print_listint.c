#include "lists.h"

/**
 * print_listint - function that prints all the elements of a `listint_t` list.
 * @h: head of the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t counter;

	for (c = h, counter = 0; c != NULL; counter++, c = c->next)
		printf("%d\n", c->n);

	return (counter);
}

