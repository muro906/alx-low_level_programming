#include"main.h"
/**
 * _strchr-Return pointer to first occurence of character c in the string s
 * @s: The argument string
 * @c: The character to be searched for
 * Return: Return pointer to the occurence of the character
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;
	int i = 0;

	for (i = 0; *s <= '\0'; i++)
	{
		if (*s == c)
		{
			ptr = s;
			return (ptr);/*return first match*/
		}
		s++;
	}
	return (NULL);/*If no match is found*/
}
