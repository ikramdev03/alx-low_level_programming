#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size);

int row, colone;
{
	if (size <= 0)
		_putchar('\n');

	for (row = 0; row <= size; row++)
	{
		for (colone = 0; colone <= (size); colone++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
