#include "main.h"

int acual_prime(int n, int i);

/**
 * is_prime_number - says if integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (acual_prime(n, n - 1));
}

/**
 * acual_prime - calculates if a number prime recursively
 *
 * @n: numbrer evaluate
 * @i: iterator
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int acual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (acual_prime(n, i - 1));
}
