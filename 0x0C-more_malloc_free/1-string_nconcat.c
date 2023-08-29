#include"main.h"
/**
 * string_nconcat-Concatenate two strings
 * @s1: The source string
 * @s2: the dest string
 * Return: pointer to the new strin
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int len1 = 0, len2 = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + 1 + n));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	while (n < len2 && i < (len1 + n))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
