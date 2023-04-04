#include <stdio.h>
#include "lists.h"

/*
 * print_list - prints all the element of a linked list
 * @h - pointer to the list_t list to be printed
 * Return: returns the number of nodes printed
 */

size_t print_list(const list_t *h);
{
	if (h == Null)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s \n", h->len, h->str);
	return (1 + print_list(h->next));
}
