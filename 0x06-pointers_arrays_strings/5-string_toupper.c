#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string
 *			to uppercase
 * @str: the string
 *
 * Return: pointer to the changed string
 */
char *string_toupper(char *str)
{
	char upp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
	int j;
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			j = str[i] - 97;
			str[i] = upp[j];
		}
		i++;
	}
	return (str);
}
