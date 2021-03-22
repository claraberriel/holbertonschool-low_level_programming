#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print a list
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		nodes++;
		h->next;
	}
	return (nodes);
}
