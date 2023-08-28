#include"main.h"
/**
 * _strspn-Returns the length of a prefixed substring
 * @s: The string
 * @accept: The substring
 * Return: The length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
