#include<stdio.h>
#include"main.h"
/**
 * main- Entry point for the program
 * _putchar- prints a character to stdout
 * Return: always 0
 */
int main(void)
{
	char a[] = "_putchar";
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		_putchar(a[0]);
		i++;
	}
	_putchar('\n');
	return (0);
}
