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
 * add_node -  adds a new node at the beginning of a list
 * @head: pointer to first element of the list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
		free(new);

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
