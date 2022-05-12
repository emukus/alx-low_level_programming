#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to struct(pointer argument passed from main
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
