#include "dog.h"
#include <stdlib.h>
/**
 * init_dog-initailiases a variable of type struct dog
 * @d:pointer to struct dog
 * @name:name of dog
 * @age:of dog
 * @owner:name of owner
 * Return:void
 */

void init_dog(struct dog_t *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
