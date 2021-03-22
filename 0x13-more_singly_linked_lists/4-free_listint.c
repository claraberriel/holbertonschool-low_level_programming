#include "lists.h"

/**
 * free_listint - deallocates memory for list
 * @head: pointer to list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *willy;

	while (head != NULL)
	{
		willy = head;
		head = head->next;
		free(willy);
	}

	free(head);
}
