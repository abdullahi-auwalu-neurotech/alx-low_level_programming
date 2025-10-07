#include <stdio.h>

/**
 * main - prints lowercase alphabet except q and e
 *
 * Return: Returns 0 if successful
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
