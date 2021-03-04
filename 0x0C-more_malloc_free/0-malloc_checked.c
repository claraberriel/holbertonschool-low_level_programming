#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates
 * @b: parameter
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *checker;

	checker = malloc(b);

	if (checker == NULL)
		exit(98);

	return (checker);
}
