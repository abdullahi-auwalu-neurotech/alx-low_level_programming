#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}

