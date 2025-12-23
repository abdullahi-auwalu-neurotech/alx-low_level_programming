#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - add positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 if no other than digit in the array
 *	otherwise, 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	int n = 0;
	char str[12];

	UNUSED(argc);

	while (argv[i] != NULL)
	{
		n = atoi(argv[i]);
		snprintf(str, sizeof(str), "%d", n);

		if (n != 0)
		{
			if (strcmp(argv[i], str) != 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		else if ((n == 0) && (strcmp(argv[i], "0") == 0))
		{
			sum += atoi(argv[i]);
		}
		else if ((n == 0) && (strcmp(argv[i], "0") != 0))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
