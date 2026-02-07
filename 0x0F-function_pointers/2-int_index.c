#include "func_ptr.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to comapre values
 *
 * Return: -1 if no element matches or size <= 0, or
 *	index of the first element cmp doesnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0)
	{
		int i = 0;
		int j = 0;

		while (i < size)
		{
			j = cmp(*(array + i));
			if (j > 0)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
