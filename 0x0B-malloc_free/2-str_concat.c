#include"main.h"
/**
 * str_concat-Concatenate two strings
 * @s1: destination string
 * @s2: source string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i;
	int len = 0;
	int r;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		len++;
	}

	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	r = 0;
	while (s1[r] != '\0')
	{
		concat[r] = s1[r];
		r++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		concat[r] = s2[i];
		i++, r++;
	}
	concat[r] = '\0';
	return (concat);
}
