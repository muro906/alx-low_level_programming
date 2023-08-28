#include"dog.h"
/**
 * init_dog-Intializes variable of type dog
 * @d: struct variable
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
