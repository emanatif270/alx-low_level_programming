#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - initialize
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: just a lone
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
