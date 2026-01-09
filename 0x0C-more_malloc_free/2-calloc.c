#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: byte(s) of each elemnt
 *
 * Return: the pointer to the array if succesful
 *	otherwise, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *pcalloc;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	pcalloc = malloc(nmemb * size);
	if (pcalloc == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		pcalloc[i] = 0;
		i++;
	}
	return (pcalloc);
}
