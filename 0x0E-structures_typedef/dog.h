#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<stdlib.h>
/**
 * struct dog- A dog's basic info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 *
 * Description: Longer despription
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef name of struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif/*DOG_H*/
