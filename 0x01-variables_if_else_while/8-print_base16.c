#include<stdio.h>
/**
 * main- entry point for program
 * Return: always 0
 */
int main(void)
{
	int c;
	int i;
	char a[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

	i = 0;

	for (c = 0;  c <= 15; c++)
	{
		if (c > 9)
		{
			putchar(a[i]);
			i++;
		}
		else
		{
			putchar(c + '0');
		}
	}
	putchar('\n');
	return (0);
}
