#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: 98 if it fails,
 *	otherwise, pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
