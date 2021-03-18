#include "lists.h"
#include <stdio.h>

/**
 * _strlen_recursion - print a string in reverse
 * @s: string
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len = (_strlen_recursion(s + 1) + 1);

	return (len);
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

	if (new->str == NULL)
		free(new);

	new->len = _strlen_recursion(str);
	
	new->next = NULL;

	if (aux)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}

	else
		*head = new;

	return (new);
}
