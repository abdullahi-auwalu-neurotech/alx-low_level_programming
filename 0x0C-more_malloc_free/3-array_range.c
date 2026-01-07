#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: min integeter
 * @max: max integer
 *
 * Return: pointer to the array if successful,
 *	otherwise, NULL
 */
int *array_range(int min, int max)
{
	int *arr, off, i;

	if (min > max)
		return (NULL);
	off = min;
	i = 0;
	while (off < max)
	{
		i++;
		off++;
	}
	arr = malloc(sizeof(int) * i + 1);
	if (arr == NULL)
		return (NULL);

	off = 0;
	while (i >= 0)
	{
		arr[off] = min;
		min++;
		off++;
		i--;
	}
	return (arr);
}
