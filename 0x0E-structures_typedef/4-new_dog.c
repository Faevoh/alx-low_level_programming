#include "dog.h"
#include <stdlib.h>

/**
  *new_dog - creates a new dog
  *@name: name of new dog
  *@age: age of new dog
  *@owner: owner of the dog
  *Return: NULL if function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t m, n, o;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (m = 0; name[m] != '\0'; m++)
		;
	m++;
	dog->name = malloc(sizeof(char) * m);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (n = 0; n < m; n++)
		dog->name[n] = name[n];
	dog->age = age;
	for (o = 0; owner[o] != '\0'; o++)
		;
	o++;
	dog->owner = malloc(sizeof(char) * o);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (n = 0; n < o; n++)
		dog->owner[n] = owner[n];
	return (dog);
}
