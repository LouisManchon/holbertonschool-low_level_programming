#include "main.h"

/**
 * print_square - prints a square
 *@size:  the size of the square
 */

void print_square(int size)
{
	int a;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a < size ; a++)
		{
			for (i = 0 ; i < size ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
