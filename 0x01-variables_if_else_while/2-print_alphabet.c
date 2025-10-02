#include <stdio.h>

/**
 * main - prints lowercase alphabet using putchar and while loop
 *
 * Return: returns 0 if sucessful
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
