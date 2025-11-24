#include "main.h"

/**
 * rev_string - reverses a string
 * @*s: the string to be reversed
 */
void rev_string(char *s)
{
	char r[50];
	int i, j, k, m;

	for (i = 0; s[i] != '\0'; i++);

	k = i - 1;
	j = 0;
	while (k >= 0)
	{
		r[j] = s[k];
		j++;
		k--;
	}
	s[j] = '\0';
	m = 0;
	while (j >= 0)
	{
		s[m] = r[m];
		j--;
		m++;
	}
}
