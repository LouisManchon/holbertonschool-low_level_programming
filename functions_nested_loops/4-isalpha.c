#include "main.h"

/**
 * _isalpha -
 * @c:
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
