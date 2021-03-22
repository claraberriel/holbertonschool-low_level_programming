#include "lists.h"

/**
 * add_nodeint - adds a new a new node at the beginning of the list
 * @head: pointer to head
 * @n: int value of new node
 * Return: address of the new element, or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

		if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;

	return (new);
}
