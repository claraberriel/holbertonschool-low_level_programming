#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of the list
 * @h: pointer to head (first element of linked list)
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	return (0);
	

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		i += 1;
		h = h->next;
	}
	return (i);
}

