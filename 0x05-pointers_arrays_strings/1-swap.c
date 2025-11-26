#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one of the parameters
 * @b: the other parameter
 */
void swap_int(int *a, int *b)
{
	int n, m;

	n = *a;
	m = *b;

	*a = m;
	*b = n;
}
