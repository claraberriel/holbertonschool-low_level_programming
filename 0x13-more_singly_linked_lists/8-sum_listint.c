#include "lists.h"

/**
 * sum_listint - sums all data of a list
 * @head: pointer to list
 * Return: sum or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		count = count + head->n;
		head = head->next;
	}

	return (count);
}
