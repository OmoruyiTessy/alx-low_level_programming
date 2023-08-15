#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a variable
 * @d: pointer to a dog
 * @name: pointer to the name
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
