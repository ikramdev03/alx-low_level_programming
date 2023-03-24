#include "main.h"

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

	for (row = 1; row <= size; row++)
	{
		for (colone = 1; colone <= size; colone++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
