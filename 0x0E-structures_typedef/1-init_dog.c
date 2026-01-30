#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: member of the struct
 * @age: member of the struct
 * @owner: member of the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
