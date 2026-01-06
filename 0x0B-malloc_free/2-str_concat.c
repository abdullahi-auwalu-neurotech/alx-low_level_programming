#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the other strings
 *
 * Return: NULL if malloc fails,
 *	otherwise pointer to the new concat string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if ((s1 == NULL) && (s2 == NULL))
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	i--;
	ptr = malloc(sizeof(char) * (i + j));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
