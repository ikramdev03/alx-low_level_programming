#include "main.h"

int number(int n, int root);

/**
 * number - help find the square root of natual squareroot number.
 * @n: naturalnumber starting from 1
 * @root: squareroot number to be found.
 *
 * Return: square root of answer.
 * if root is not natural square root returns -1
 * if root less than 0 returns -1
 */
int number(int n, int root)
{
	if (n * n > root)
		return (-1);
	if (n * n == root)
		return (n);
	return (number(n, i + 1));
}
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
	return (number(n, 0));
}
