#include "main.h"

/**
 * is_prime_number - says if integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (_prime_number(n, n - 1));
}
/**
 * is_prime_number - calculates if a number prime recursively
 *
 * @n: numbrer evaluate
 * @i: iterator
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n, int i)
{
	if (i == 0)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (_prime_number(n, i - 1));
}
