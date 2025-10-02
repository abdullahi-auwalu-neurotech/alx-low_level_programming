#include <stdio.h>

/**
 * main - Prints combination of digits, space and comma
 *
 * Return: returns 0 (if successful)
 */
int main(void)
{
	int nb = 48;

	while (nb < 58)
	{
		putchar(nb);
		if (nb != 57)
		{
			putchar(44);
			putchar(32);
		}
		nb++;
	}

	putchar('\n');
	return (0);
}
