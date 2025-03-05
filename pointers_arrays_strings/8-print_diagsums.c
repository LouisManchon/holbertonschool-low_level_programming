#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals
 * of a square matrix of integers
 *
 * @a: square
 * @size: size of the sides
 */

void print_diagsums(int *a, int size)
{
	int diagpos, sum1 = 0, sum2 = 0;

	for (diagpos  = 0; diagpos < size; diagpos++)
	{
		sum1 += a[(size + 1) * diagpos];
		sum2 += a[(size - 1) * (diagpos + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
