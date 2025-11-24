#include "main.h"

/**
 * puts_half - prints half of a string
 * @*str: the string to the printed
 */
void puts_half(char *str)
{	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;
	i--;

	if (i % 2 == 0)
	{	j = i / 2;
		j++;

		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = (i - 1) / 2;
		j++;
		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
