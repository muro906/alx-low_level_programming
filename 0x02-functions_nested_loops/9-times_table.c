#include"main.h"

/**
 * times_table- prints the timetable
 */
void times_table(void)
{
	int i;
	int j;
	int product;
	int n;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product > 9)
			{
				n = product / 10;
				k = product % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(n + '0');
				_putchar(k + '0');
			}
			else
				_putchar(product + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
