#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 0 to 14
 */
void more_numbers(void)
{
	int i, j, m, n;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			n = j / 10;
			m = j % 10;

			if (j < 10)
			{
				n = j;
				m = -48;
			}
			_putchar('0' + n);
			_putchar('0' + m);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
