#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - funtion that prints struct dog
 * @d: pointer to dog structure type
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
