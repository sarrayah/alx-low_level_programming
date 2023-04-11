#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: pointer to the list_t list to be printed
 *
 * return: returns the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
