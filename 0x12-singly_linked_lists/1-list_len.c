#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to head (first element in the list)
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
        int i = 0;

        while (h->next)
        {
            h = h->next;
            i++;
        }
        return (i);
}
