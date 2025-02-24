#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: correspond à \
 */

void print_diagonal(int n)
{
	int a;
	int i;
	
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
	
