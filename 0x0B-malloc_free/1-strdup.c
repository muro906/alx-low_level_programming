#include"main.h"
/**
 * _strdup- returns a pointer to a string which is a duplicate of str
 * @str: The string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *str2;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
	{
		str2[r] = str[r];
	}
	return (str2);
}
