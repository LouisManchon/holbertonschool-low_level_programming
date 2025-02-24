#include "main.h"

/**
 * isupper - Return 1 if it's uppercase 0 otherwise
 *
 * Return: (0)
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
