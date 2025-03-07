#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds the square root of a number
 * @a: square root
 * @n: given number
 *
 * Return: square root
 */

int find_sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (find_sqrt(n, a + 1));
}
