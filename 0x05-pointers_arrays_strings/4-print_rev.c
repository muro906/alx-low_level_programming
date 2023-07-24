#include"main.h"
/**
 * print_rev-print reverse of a string
 * @s: parameter
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = 0;
	for (i = 0; str[i] != '\0', i++)
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
