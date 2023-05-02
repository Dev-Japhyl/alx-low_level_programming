#include "lists.h"

/**
 * pop_listint - Delete the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;

	return (num);
}

