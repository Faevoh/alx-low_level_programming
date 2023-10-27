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
		return (NULL);

	for (m = 0; name[m]; m++)
		;
	m++;
	dog->name = malloc(m * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (o = 0; o < m; o++)
		dog->name[o] = name[o];
	dog->age = age;
	for (n = 0; owner[n]; n++)
		;
	n++;
	dog->owner = malloc(n * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (o = 0; o < n; o++)
		dog->owner[o] = owner[o];
	return (dog);
}
