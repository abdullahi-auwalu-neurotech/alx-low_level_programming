#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *concat;

	concat = string_nconcat("Hello", "", 12);
	if (concat == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", concat);
	free(concat);
	return (0);
}
