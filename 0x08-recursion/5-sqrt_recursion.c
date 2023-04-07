#include "main.h"

int acual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: resulting the square root n
 * if n does not have a natural sqaart root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (acual_sqrt_recursion(n, 0));
}

/**
 * acual_sqrt_recursion - recurses find the natual
 * @n: naturalnumber starting from 1
 * @i: iterator
 *
 * Return: square root of answer.
 * if root is not natural square root returns -1
 * if root less than 0 returns -1
 */
int acual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (acual_sqrt_recursion(n, i + 1));
}
