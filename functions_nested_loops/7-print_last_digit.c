#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the last digit
 *
 * Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int a = n % 10;

	_putchar(48 + a);
	return (a);
}
