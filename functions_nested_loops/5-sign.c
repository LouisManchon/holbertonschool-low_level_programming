#include "main.h"

/**
 * print_sign - write a function that prints the sign of a number
 * @n: n is more equal or less than 0
 *
 * Return: 1 if more 0 if equal -1 if less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
