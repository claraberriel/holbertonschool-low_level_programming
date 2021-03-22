#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node
 * @head: pointer to list
 * @index: index of the node starting at 0
 * Return: nth node or NULL if non existant
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;
	listint_t *aux;

	if (head == NULL)
		return (NULL);

	aux = head;

	if (aux != NULL)
	{
		for ( nth = 0; nth < index; nth++)
		{
			aux = aux->next;
		}
	}

	if (aux == NULL)
		return (NULL);

	return (aux);
}
