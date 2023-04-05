#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the element of a linked list
 * @h -h is the pointer to the list_t to be printed
 * prints [0] or (nil) if str is NULL
 * Return: returns the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
