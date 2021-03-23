#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of the list
 * @head: pointer to begininng of list
 * @n: int value of new node
 * Return: address of new element of NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	aux = *head;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	aux->next = new;

	return (new);
}
