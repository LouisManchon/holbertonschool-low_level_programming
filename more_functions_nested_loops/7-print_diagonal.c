#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: correspond à caractère spe
 */

void print_diagonal(int n)
{
	int a;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a < n ; a++)
		{
			for (i = 0 ; i < a ; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
