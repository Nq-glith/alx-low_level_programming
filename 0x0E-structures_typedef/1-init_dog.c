#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of
 * type struct dog
 * @d: pointer to members of struct dog
 * @name: parameter used to initialize structure member
 * @age: parameter used to initialize structure member
 * @owner: parameter used to initialize structure member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
