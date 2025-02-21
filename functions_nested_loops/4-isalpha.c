#include "main.h"

/**
 * _isalpha - Checks if C is lowercase/uppercase or not
 * @c: c is a lowercase,uppercase or not
 *
 * Return: 1 if c is a letter return 0 otherwise
 */

int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
