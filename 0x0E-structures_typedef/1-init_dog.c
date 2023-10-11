#include "dog.h"

/**
 * init_dog - initialize
 * @d: the dog
 * @name: dog name
 * @age: dog age
 * @owner: oner name
 *
 * Return: void
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
