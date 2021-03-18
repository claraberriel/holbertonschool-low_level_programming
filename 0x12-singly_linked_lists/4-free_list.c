#include "lists.h"

/**
 * free_list - deallocates momery of list
 * @head: pointer to first element of the linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *susi;

	while (head != NULL)
	{
		susi = head;
		head = head->next;
		free(susi->str);
		free(susi);
	}
	free(head);
}
