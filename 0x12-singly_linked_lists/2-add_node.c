#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nod - a function that adds a new node at the beginning of list_t list
 * @head: (**head) a double pointer to the list_t list
 * @str: string to add to the node
 * str needs to be duplicated
 *
 * return: returns the address of the new element if succeeds
 * and NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	unsigned int len = strlen(str);

	if (newnode == NULL)
	return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	*head = newnode;
	return (*head);

}
