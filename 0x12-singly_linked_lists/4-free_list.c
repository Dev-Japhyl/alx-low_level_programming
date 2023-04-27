#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *value;

	while (head != NULL)
	{
		value = head;
		/* Free the str */
		free(value->str);
		/* Free the list */
		head = head->next;
		free(value);
	}
}

