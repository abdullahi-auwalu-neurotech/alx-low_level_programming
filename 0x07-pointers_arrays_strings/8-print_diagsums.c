#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 *	diagonals of a square
 * @a: pointer to the array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2;

	sum1 = fdiagsums(a, size);
	sum2 = bdiagsums(a, size);

	printf("%d, %d\n", sum1, sum2);
}

/**
 * fdiagsums - prints the sum of the one
 *      diagonals of a square
 * @a: pointer to the array
 * @size: size of the array
 *
 * Return: the sum.
 */
int fdiagsums(int *a, int size)
{
	int l, k, sum1;

	int *index = a;

	l = 0;
	k = 0;
	sum1 = 0;

	while (k < size)
	{
		if (l == (size - 1))
		{
			sum1 = sum1 + *(index + k);
			k++;
			l = 0;
			index = &a[size * k];
		}
		l++;
	}
	return (sum1);
}

/**
 * bdiagsums - prints the sum of the one
 *      diagonals of a square
 * @a: pointer to the array
 * @size: size of the array
 *
 * Return: the sum.
 */
int bdiagsums(int *a, int size)
{
	int sum2 = 0;
	int j = 0;
	int l = 0;
	int k = 0;

	while (k < size)
	{
		if (l == (size - 1))
		{
			sum2 = sum2 + a[j];
			k++;
			l = 0;
		}
		l++;
		j++;
	}
	return (sum2);
}
