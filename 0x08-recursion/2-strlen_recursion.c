#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: the string
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		n = 0;
		return (n);
	}

	n = _strlen_recursion(s + 1);
	return (n + 1);
}
