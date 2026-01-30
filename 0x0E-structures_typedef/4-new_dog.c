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
		i++;
	for (j = 0; owner[j] != '\0'; j++)
		j++;

	n_name = malloc(sizeof(char *) * i);
	if (n_name == NULL)
		return (NULL);
	n_owner = malloc(sizeof(char *) * j);
	if (n_owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
		return (NULL);

	for (k = 0; k != i; k++)
		n_name[k] = name[k];
	k = 0;
	for (k = 0; k != j; k++)
		n_owner[k] = owner[k];
	n_dog->name = n_name;
	n_dog->age = age;
	n_dog->owner = n_owner;
	return (n_dog);
}

