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
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; (s2[j] != '\0') && (j != n); j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (s1[k] != '\0')
	{
		str[k] = s1[k];
		k++;
	}
	i = 0;
	while (j > 0)
	{
		str[k] = s2[i];
		k++;
		i++;
		j--;
	}
	
	str[k] = '\0';
	return (str);
}


