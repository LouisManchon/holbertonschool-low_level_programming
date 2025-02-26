#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *@a: swip the value
 *@b: swip the value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
