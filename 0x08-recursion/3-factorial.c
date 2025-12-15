#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the factorial
 *
 * Return: -1 if n is less than 0.
 *	else the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
