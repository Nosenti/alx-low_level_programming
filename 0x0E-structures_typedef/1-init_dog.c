#ifndef dog
#define dog
#include "dog.h"
/**
 * init_dog - initializing dog struct
 * @d: struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif