#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensionnal array of integers
 * @width: int, width of the array
 * @height: int, height of the array
 *
 * Return: pointer to the array
 * or NULL if one dimension is equal to zero
 */

int **alloc_grid(int width, int height)
{
	int row, col, **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	else
	{
		array = malloc(sizeof(int *) * height);
		if (array == NULL)
			return (NULL);

		for (row = 0; row < height; row++)
		{
			array[row] = malloc(sizeof(int) * width);

			if (array[row] == NULL)
			{
				while (row >= 0)
				{
					row--;
					free(array[row]);
				}
				free(array);
			}
			for (col = 0; col < width; col++)
			{
				array[row][col] = 0;
			}
		}
	return (array);
	}
}
