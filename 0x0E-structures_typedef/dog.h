#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<stdlib.h>
/**
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 */
struct dog{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif/*DOG_H*/
