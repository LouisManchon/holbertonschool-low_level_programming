#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 0 ; a < 15 ; a++)
		{
			if (a >= 10)
			{
				_putchar(49);
			}
			_putchar(48 + (a % 10));
		}
		_putchar('\n');
	}
}
