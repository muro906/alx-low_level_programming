#include"main.h"
/**
 * _islower-checks if lowercase
 * @c: parameter
 * Return: 1 if true and 0 elsewise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
