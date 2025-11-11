#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int n, t, m, h;

		n = 0;
		while (n != size)
		{
			t = size - n;
			m = 1;
			while (size != (size - t + m))
			{
				_putchar(' ');
				m++;
			}
			h = t - 1;
			while (h != size)
			{
				_putchar('#');
				h++;
			}
			_putchar('\n');
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
