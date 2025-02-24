#include "main.h"

/**
 * _isupper - Return 1 if it's uppercase 0 otherwise
 * @c : is uppercase or otherwise
 *
 * Return: (1) if uppercase (0) otherwise
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
