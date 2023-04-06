#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: numbre to calculate the square root of
 *
 * Return: resulting the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));
}
