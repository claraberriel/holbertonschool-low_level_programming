#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at a idx position
 * @head: pointer to list
 * @idx: position where new node will be added 
 * @n: new node value
 * Return: address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nth;
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

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	if (aux != NULL)
	{
		for (nth = 0; nth < idx; nth++)
		{
			aux = aux->next;
		}
	}

	else
		return (NULL);
	
	new->n = n;
	new->next = aux->next;
	aux->next = new;

	return (new);
}
