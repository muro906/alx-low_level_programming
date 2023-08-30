#include"main.h"
/**
 * _abs- print absolute value
 * @c: parameter
 * Return: absolute value of number
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	c = -c;
	return (c);
}
