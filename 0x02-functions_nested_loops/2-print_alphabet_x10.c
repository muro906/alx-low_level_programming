#include"main.h"
/**
 * print_alphabet_x10-print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
