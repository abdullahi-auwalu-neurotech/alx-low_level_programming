#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @x: the number
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int r;
	int n;

	r = x % 10;
	if (r > 0)
	{
		_putchar('0' + r);
		return (r);
	}

	else
	{
		n = r * -1;
		_putchar('0' + n);
		return (n);
	}
}
