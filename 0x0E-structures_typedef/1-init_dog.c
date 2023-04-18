#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog is char.
 * @age: age of the dog is float.
 * @owner: owner of the dog is char.
 *
 * Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
