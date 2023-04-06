#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: numbre to calculate the square root of
 *
 * Return: resulting the square root n
 * if n does not have a natural sqaart root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (number(1, n));
}
