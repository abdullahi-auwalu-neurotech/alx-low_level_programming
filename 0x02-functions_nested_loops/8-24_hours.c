#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: minutes of a day
 */
void jack_bauer(void)
{
	int i, j, hb, hs, mb, ms;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			hb = i / 10;
			hs = i % 10;
			mb = j / 10;
			ms = j % 10;
			_putchar('0' + hb);
			_putchar('0' + hs);
			_putchar(':');
			_putchar('0' + mb);
			_putchar('0' + ms);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
