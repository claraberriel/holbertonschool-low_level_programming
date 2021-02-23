#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard
 * @a:array of 8
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int x, y;
	char aux;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			aux = a[x][y];
			_putchar(aux);
		}
		_putchar('\n');
	}
}
