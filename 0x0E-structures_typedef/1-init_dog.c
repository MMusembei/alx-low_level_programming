#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a var of type struct dog
 * @d: pointer to struct dog to intialize
 * @name: name to intialize
 * @age: age to intialize
 * @owner: owner to intialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
