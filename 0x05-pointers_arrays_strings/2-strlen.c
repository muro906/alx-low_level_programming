#include"main.h"
/**
 * _strlen-length of string
 * @s: parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
