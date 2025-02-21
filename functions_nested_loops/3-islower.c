#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c: lowercase or not
 *
 * Return: 1 if c is a lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
