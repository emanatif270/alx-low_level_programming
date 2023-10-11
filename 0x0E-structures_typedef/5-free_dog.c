#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: pointer to the struct
 * Retrun: none
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->onwer);
		free(d);
	}
}
