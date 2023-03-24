#include "main.h"

/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *Owned by Bwave ICT/ Bright Daniel
 */

void print_number(int n)
{
unsigned int num = n;
/*first check if its negative*/
if (n < 0)
{
_putchar('-');
num = -num;
}
/*print the first few digits*/
if (num / 10)
print_number(num / 10);
/*print the last digit*/
_putchar((num % 10 + '0');
}
