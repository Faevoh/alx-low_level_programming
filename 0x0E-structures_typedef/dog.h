#ifndef _DOG_H_
#define _DOG_H_

/**
  *struct dog - a struct to create a dog info
  *@name: string variable of dog name
  *@age: float variable of dog age
  *@owner: string variable of dog owner
  *
  *Description: struct for a dog info
  */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

#endif
