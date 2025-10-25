#include "main.h"

/**
 * times_table - prints 9 times tables
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j, k, m, n;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar('0' + k);
			}
			else
			{
				m = k / 10;
				n = k % 10;
				_putchar('0' + m);
				_putchar('0' + n);
			}

			if ((i < 10) && (j < 9))
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
