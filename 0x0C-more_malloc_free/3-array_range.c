#include"main.h"
/**
 * array_range-Create array range
 * @min: mini value of array
 * @max: max value of array
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int len;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	if (min < 0)
		len = max + (-min) + 1;
	else
		len = (max - min) + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);
	if (min < 0)
	{
		for (i = 0; min <= max; min++, i++)
		{
			ptr[i] = min;
		}
		return (ptr);
	}
	for (i = 0; min <= max; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
