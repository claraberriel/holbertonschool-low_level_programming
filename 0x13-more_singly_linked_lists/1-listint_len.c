#include "lists.h"

/**
 * listint_len - print a list
 * @h: pointer to head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
