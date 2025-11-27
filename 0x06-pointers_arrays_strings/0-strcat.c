#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: a string to concatenate to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	j = 0;
	while (j != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	printf("%p\n", dest);
	return (dest);
}
