#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concatenate
 *
 * Return: NULL if it fails,
 *	otherwise, pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; (s2[j] != '\0') && ((unsigned int)j != n); j++)
		;
	k = i + j;
	if (s2[j] != '\0')
		k = k + 1;
	str = malloc(sizeof(char) * k);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (s1[k] != '\0')
	{
		str[k] = s1[k];
		k++;
	}
	i = 0;
	while (j >= 0)
	{
		str[k] = s2[i];
		k++;
		i++;
		j--;
	}
	if (str[k] != '\0')
		str[k] = '\0';
	return (str);
}


