#include<stdio.h>
/**
 * main- entry point for program
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 48;  c <= 57; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}