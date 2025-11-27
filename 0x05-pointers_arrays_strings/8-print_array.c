#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: the number of elements of the array
 */
void print_array(int *a, int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m < (n - 1))
		{
			printf("%d, ", a[m]);
			m++;
		}
		printf("%d\n", a[m]);
	}

}
