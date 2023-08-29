#include"main.h"
/**
 * _calloc-Allocates memory in blocks
 * @nmemb: Number of array members
 * @size: Size of each block
 * Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/**
 * _memset- Fill memory with a constant byte
 * @str: pointer argument
 * @c: value to be filled
 * @size: Number of time to be filled
 * Return: char pointer
 */
char *_memset(char *str, char c, unsigned int size)
{
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}

