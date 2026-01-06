#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *	and initializes it with a specific char.
 * @size: size of the array to allocate memory for
 * @c: the char to initialize with
 *
 * Return: NULL if size is 0 or malloc fails
 *	otherwise, a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *mem;

	unsigned int i = 0;

	if (size > 0)
	{
		mem = malloc(sizeof(char) * size);
		if (mem == NULL)
			return (NULL);
		while (i < size)
		{
			mem[i] = c;
			i++;
		}
		return (mem);
	}
	return (NULL);
}
