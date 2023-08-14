#include "dog.h"

/**
 * init_dog - intialize adog
 * @d: dog to initilize
 * @name: dog name
 * @age: dog age
 * @owner: owner
 * Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
