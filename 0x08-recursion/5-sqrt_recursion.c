#include "main.h"

/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: the number
 *
 * Return: the natural square of a number
 *	if it doesnt have, -1.
 */
int _sqrt_recursion(int n)
{
	int g;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);

	g = 1;
	return (_natural_sqrt(g, n));
}

/**
 * _natural_sqrt - find the natural square root of a number
 * @g: possible square root
 * @n: the number
 *
 * Return: the natural square root of the number
 */
int _natural_sqrt(int g, int n)
{
	if ((g * g) == n)
		return (g);
	else if ((g * g) > n)
		return (-1);
	return (_natural_sqrt(g + 1, n));
}

