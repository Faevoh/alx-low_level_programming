#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - initializes a new variable to struct dog
  *@d: pointer to the struct of the new dog
  *@name: name of new dog
  *@age: age of new dog
  *@owner:the owner of the new dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
