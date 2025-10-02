#include <stdio.h>

/**
 * main - Prints numbers using putchar
 *
 * Return: 1 if successful
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
