#include "main.h"

/**
 * print_triangle - draws a triangle line on the terminal
 *
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{	
		for (c = 1 ; c <= size ; c++)
		{
			for (a = size - c ; a > 0 ; a--)
			{
				_putchar(' ');
			}
			for (b = 0 ; b < c ; b++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
