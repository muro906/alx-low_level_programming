#include<stdio.h>
/**
 * main- entry point for program
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 97;  c <= 122; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
