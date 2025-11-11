#include "main.h"

/**
 * print_line - draws a straignt line
 * @n: number of times the character
 *	_ should be printed
 */
void print_line(int n)
{
	int m = 0;

	while ((n != m) && !(n < 0))
	{
		_putchar('_');
		m++;
	}
	_putchar('\n');
}
