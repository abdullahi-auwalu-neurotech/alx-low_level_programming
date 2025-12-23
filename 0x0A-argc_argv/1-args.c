#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 *	passed into it
 * @argc: argument count
 * @argv: argument pointers vector
 *
 * Return: return 0, if successful.
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}
