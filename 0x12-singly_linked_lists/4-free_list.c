#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: the list to be freed
 * this code free a memory allocated for a linked list
 */

void free_list(list_t *head)
{
	list_t *var;

	while (head)
	{
		var = head->next;
		free(head->str);
		free(head);
		head = var;
	}

}

