#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog pointer
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			d->name = "(nill)";
		if (!d->owner)
			d->owner = "(nill)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
