#include"main.h"
/**
 * _strlen-length of string
 * @s: parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
