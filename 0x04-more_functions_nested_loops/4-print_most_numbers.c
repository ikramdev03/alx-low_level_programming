#include "main.h"

/**
*print_most_numbers - prints
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
	char c;

	for (num = 0; num <= 9; n++)
	{
	if (num == 2 || num == 4)
		continue;
	_putchar(num + 48);
	}
	_putchar('\n');
}
