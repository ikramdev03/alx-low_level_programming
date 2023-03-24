#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num = 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar("\n");
}
