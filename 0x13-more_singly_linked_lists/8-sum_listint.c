#include "lists.h"

/**
 * sum_listint - sums all data of a list
 * @head: pointer to list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int count;

	while (head != NULL)
	{
		count = count + head->n;
		head = head->next;
	}

	return (count);
}
