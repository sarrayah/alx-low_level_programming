#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this function adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to be added as a new node
 * newnode; is the node to be added
 * var: is the pointer used
 * len: used to store the length of the string
 *
 * Return: address of the new element,if successful or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *var = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (var->next)
		var = var->next;

	var->next = newnode;

	return (newnode);
}
