#include"main.h"
/**
 * create_array-Creates an array and intializes with a soecific char
 * @size: size of the array
 * @c: character to intialize the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	char *temp;
	ptr = (char *) malloc(size);
	if (ptr == NULL || size == 0)
		return (NULL);
	temp = ptr;

	while (temp <= (ptr + size))
	{
		*temp = c;
		temp++;
	}
	return (ptr);
}
