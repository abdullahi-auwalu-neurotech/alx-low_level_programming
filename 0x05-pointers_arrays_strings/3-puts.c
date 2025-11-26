#include "main.h"

/**
 * _puts - prints a string
 * @str:the string
 */
void _puts(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(j = str[i]);
	}
	_putchar('\n');
}
