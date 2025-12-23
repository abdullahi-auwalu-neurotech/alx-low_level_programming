#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a newline.
 * @argc: the argument count
 * @argv: the pointer to an array
 *	of pointers to the arguments
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
