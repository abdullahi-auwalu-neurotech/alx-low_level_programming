#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2D array of ints
 * @width: the column
 * @height: the row
 *
 * Return: NULL on failure, or width or height is less than 0
 *	otherwise, a pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if ((width < 1) || (height < 1))
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i != 0)
			{
				free(grid[i]);
				i--;
			}
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
