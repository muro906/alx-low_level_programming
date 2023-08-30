#include"main.h"
/**
 * _memcpy-Copies n bytes from memory area src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to be copied
 * Return: The pointer to dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len = n;
	char *p = dest;

	while (len--)
	{
		*p = *src;
		p++;
		src++;
	}
	return (dest);
}
