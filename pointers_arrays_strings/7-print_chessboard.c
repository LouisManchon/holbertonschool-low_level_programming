#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to pointer (array 8x8)
 */

void print_chessboard(char (*a)[8])
{
	int height;
	int width;

	for (height = 0; height < 8; height++)
	{
		for (width = 0; width < 8; width++)
		{
			_putchar(a[height][width]);
		}
		_putchar('\n');
	}
}
