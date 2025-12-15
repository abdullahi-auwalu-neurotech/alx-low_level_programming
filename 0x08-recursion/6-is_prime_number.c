#include "main.h"

/**
 * is_prime_number - find if a number is prime
 * @n: the number
 *
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	int g, f, r, sq;

	if (n <= 1)
		return (0);
	g = 1;
	sq = _sqrt(g, n);
	f = 2;
	r = _find_prime(f, sq, n);
	return (r);
}

/**
 * _sqrt - returns the square root of a number
 * @n: the number
 * @g: the possible square root
 *
 * Return: the square root
 */
int _sqrt(int g, int n)
{
	if ((g * g) == n)
	{
		return (g);
	}
	else if ((g * g) > n)
	{
		g = (g + (g - 1)) / 2;
		return (g);
	}
	return (_sqrt(g + 1, n));
}

/**
 * _find_prime - find if the number is prime
 * @f: possible factor of the number
 * @sq: square root of the number
 * @n: the number
 *
 * Return: 1 if prime, otherwise 0.
 */
int _find_prime(int f, int sq, int n)
{
	if (f <= sq)
	{
		if ((n % f) == 0)
			return (0);
	}
	else if (f > sq)
	{
		return (1);
	}
	return (_find_prime(f + 1, sq, n));
}
