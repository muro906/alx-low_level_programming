#include"main.h"
/**
 * print_last_digit-print last digit
 * @n: parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i >= 0)
	{
		_putchar(i + '0');
		return i;
	}
	i = -i;
	_putchar(i + '0');
	return (i);
}
