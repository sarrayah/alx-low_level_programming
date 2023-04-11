#include <stdio.h>
#include "lists.h"

<<<<<<< HEAD
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
=======
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
>>>>>>> c8b3942a4c6db12210803459d135f50b94ffced3
}
