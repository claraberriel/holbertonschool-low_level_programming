#include "holberton.h"

/**
 * 
 * 
 */

char *_strchr(char *s, char c)
{
int i;

/*
* iterates through string to find char c an prints it
*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	
    return (NULL);

}
