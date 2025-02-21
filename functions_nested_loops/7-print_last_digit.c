#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the last digit
 *
 * Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int a;
	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(48 + a);
	return (a);
}
