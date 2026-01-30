#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to name of the dog
 * @age: the age of the dog
 * @owner: pointer to owner
 *
 * Return: pointer to the dog_t dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n_name;
	char *n_owner;
	dog_t *n_dog;
	int i, j, k;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n_name = malloc(sizeof(char) * (i + 1));
	if (n_name == NULL)
		return (NULL);
	n_owner = malloc(sizeof(char) * (j + 1));
	if (n_owner == NULL)
	{
		free(n_name);
		return (NULL);
	}
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_name);
		free(n_owner);
		return (NULL);
	}

	for (k = 0; k != i; k++)
		n_name[k] = name[k];
	n_name[k] = '\0';
	for (k = 0; k != j; k++)
		n_owner[k] = owner[k];
	n_owner[k] = '\0';
	n_dog->name = n_name;
	n_dog->age = age;
	n_dog->owner = n_owner;
	return (n_dog);
}
