#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: NULL if str = NULL or malloc fails
 *	otherwisw, a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			;
		ptr = malloc(sizeof(char) * (i + 1));
		if (ptr == NULL)
			return (NULL);
		j = 0;
		while (j <= i)
		{
			ptr[j] = str[j];
			j++;
		}
		return (ptr);
	}
	return (NULL);
}
