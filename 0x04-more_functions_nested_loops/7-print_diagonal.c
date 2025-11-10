#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number times \ should be printed
 */
void print_diagonal (int n)
{
	int j, m;

	if (n > 0)
	{
		m = 0;
		while (n != m)
		{
			j = m - 1;
			while (j >= 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
			m++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
