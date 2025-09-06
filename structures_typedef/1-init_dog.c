#include "dog.h"
/**
 * init_dog - jsdkljlk
 * @d:pointer
 * @name: name
 * @age: age
 * @owner: owner
 * Return: returnnnn
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
