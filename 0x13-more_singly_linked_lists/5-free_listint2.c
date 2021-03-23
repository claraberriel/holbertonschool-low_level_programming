#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - deallocates memory for a list and sets head to NULL
 * @head: pointer to list
 * Return: nth
 */

void free_listint2(listint_t **head)
{
	listint_t *willy;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		willy = *head;
		*head = (*head)->next;
		free(willy);
	}

	free(*head);
}
