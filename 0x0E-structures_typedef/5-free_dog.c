#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * dog_t - typedef for struct dog
 * @d: pointer to the struct
 * 
 * Retrun: none
 */

void free_dog(dog_t *d)
{
	typedef struct dog dog_t;
	if (d)
	{
		free(d->name);
		free(d->onwer);
		free(d);
	}
}
