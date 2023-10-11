#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: dog owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	return (NULL);

	p->name = malloc(sizeof(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);
	p->age = age;
	p->owner = strdup(owner);
	return (p);
}
