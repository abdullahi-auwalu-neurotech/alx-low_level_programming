#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to reverse
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i >= 0)
	{
		_putchar(j = s[i]);
		i--;
	}
	_putchar('\n');
}

