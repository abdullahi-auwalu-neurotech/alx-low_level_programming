#include <stdio.h>

/**
 * main - Prints lower and uppercase aplphabets together
 *
 * Return: returns 0  if sucessful
 */
int main(void)
{
	int ch1 = 'a';
	int ch2 = 'A';

	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}

	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');

	return (0);
}
