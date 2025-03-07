#include "main.h"

/**
 * is_that_prime - determines if a given number is prime
 * @n: given number
 * @a: counter
 * Return: 1 if true, 0 if false
 */

int is_that_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	else if (n % a == 0 && a > 1)
		return (0);
	else if ((n / a) < a)
		return (1);

	return (is_that_prime(n, a + 1));
}

/**
 * is_prime_number - returns if a given number is prime
 * @n: given number
 *
 * Return: 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	return (is_that_prime(n, 1));
}
