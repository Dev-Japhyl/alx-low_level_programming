#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *value;
	list_t *value_end;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	value = malloc(sizeof(list_t));
	value_end = *head;
	if (value == NULL)
	{
		return (NULL);
		free(value);
	}

	value->len = i;
	value->str = strdup(str);
	value->next = NULL;
	if (*head == NULL)
	{
		*head = value;
		return (*head);
	}
	else
	{
		while (value_end->next != 0)
		{
			value_end = value_end->next;
		}
	}
	value_end->next = value;
	return (*head);
	free(value);
}

