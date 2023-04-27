#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *value;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	value = malloc(sizeof(list_t));
	if (value == NULL)
	{
		return (NULL);
		free(value);
	}

	value->len = i;
	value->str = strdup(str);
	value->next = *head;
	*head = value;
	return (value);
	free(value);
}

