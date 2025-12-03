#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words of a string
 * @str: the string
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *str)
{
	char upp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
	int j;
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || (str[i] == ',') || (str[i] == ';') || (str[i] == '.')
				|| (str[i] == '!') || (str[i] == '?') || (str[i] == '"') || (str[i] == '(')
				|| (str[i] == ')') || (str[i] == '{') || (str[i] == '}')
				|| (str[i] == '\n') || (str[i] == '\t'))
		{
			i++;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				j = str[i] - 97;
				str[i] = upp[j];
			}
			if ((str[i] == '\n') || (str[i] == '\t') || (str[i] == ' ')
					|| (str[i] == ',') || (str[i] == ';') || (str[i] == '.')
					|| (str[i] == '!') ||
					(str[i] == '?') || (str[i] == '"') || (str[i] == '(')
					|| (str[i] == ')') || (str[i] == '{') || (str[i] == '}'))
			{
				i++;
				if ((str[i] >= 'a') && (str[i] <= 'z'))
				{
					j = str[i] - 97;
					str[i] = upp[j];
				}
			}
		}
		i++;
	}
	i = 0;
	if ((str[i] >= 'a') && (str[i] <= 'z'))
	{
		j = str[i] - 97;
		str[i] = upp[j];
	}
	return (str);
}
