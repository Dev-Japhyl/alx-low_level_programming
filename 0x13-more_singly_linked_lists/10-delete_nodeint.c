#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a `listint_t` list
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
		return (1);
	}

	while (i < index - 1)
	{
		if (!hold || !(hold->next))
			return (-1);
		hold = hold->next;
		i++;
	}

	current = hold->next;
	hold->next = current->next;
	free(current);

	return (1);
}

