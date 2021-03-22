#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to first node
 * Return: head's node data (n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int pop;

	if (*head == NULL)
		return (0);

	pop = (*head)->n;
	aux = *head;
	*head = (*head)->next;

	free(aux);

	return (pop);
}
