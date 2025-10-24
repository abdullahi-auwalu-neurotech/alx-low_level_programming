#include "main.h"

/**
 * print_alphabet - prints lower case alphabet using _putchar
 *
 * Return: Always 0 when successful.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
