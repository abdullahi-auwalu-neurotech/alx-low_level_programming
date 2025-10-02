#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 *
 * Return: 0 if Successful
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
