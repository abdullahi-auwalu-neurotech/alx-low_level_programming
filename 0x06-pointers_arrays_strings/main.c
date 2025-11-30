#include <stdio.h>
#include "main.h"

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. capitalize on what comes.\n";
	char *ptr;

	ptr = leet(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
