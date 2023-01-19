#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function to initialize struct var
 * @d: Pointer to dog variable
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{	d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
