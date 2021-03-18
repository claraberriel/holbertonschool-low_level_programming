#include "lists.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
	str++;
	}
	return (str);
}

/**
 * add_node_end -  adds a new node at the beginning of a list
 * @head: pointer to first element of the list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *aux;

	aux = *head;
	
	if (head == NULL)
		return (0);
	
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	new->len = _strlen(str);

	new->next = NULL;

	if (*head == NULL)
		*head = new;
	
	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	aux->next = new;

	return (new);
}
