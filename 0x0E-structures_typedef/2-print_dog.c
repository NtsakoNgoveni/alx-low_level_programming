#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog-prints content of struct dog
 * @d:struct dog variable to be printed
 * Return:void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		prinf("(nil)");
		return (NULL);
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name d->age, d->owner);
}
