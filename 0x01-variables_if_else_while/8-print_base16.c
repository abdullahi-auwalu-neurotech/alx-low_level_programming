#include <stdio.h>

/**
 * main - Prints base16 digits
 *
 * Return: returns 0 if sucessful
 */
int main(void)
{
	int ch1 = 48;
	int ch2 = 97;

	while (ch1 < 58)
	{
		putchar(ch1);
		ch1++;
	}

	while (ch2 < 103)
	{
		putchar(ch2);
		ch2++;
	}

	putchar('\n');
	return (0);
}
