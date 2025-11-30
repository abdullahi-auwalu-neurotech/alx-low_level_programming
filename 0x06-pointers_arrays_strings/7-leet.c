#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	char n[] = "4433007711";
	char l[] = "aAeEoOtTlL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = n[j];
				break;
			}
		}
	}
	return (str);
}
