#include <stdio.h>

/**
 * main - Prints numbers
 *
 * Return: Returns 0 if successful
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
