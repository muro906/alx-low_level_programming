#include"dog.h"
/**
 * new_dog- Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog ==  NULL)
		return (NULL);
	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	 new_dog->owner = malloc(_strlen(owner) + 1);
	 if (new_dog->owner == NULL)
	 {
		 free(new_dog->name);
		 free(new_dog);
		 return (NULL);
	 }
	 _strcpy(new_dog->name, name);
	 _strcpy(new_dog->owner, owner);
	 new_dog->age =age;
	 return (new_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
