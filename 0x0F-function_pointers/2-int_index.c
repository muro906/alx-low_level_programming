#include"function_pointers.h"
#include<stdio.h>
/**
 * int_index-function
 * @array: parameter
 * @size: parameter
 * @cmp: function pointer
 * Return: an int val
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	else if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);

		if (x != 0)
			return (i);
	}
	return (-1);
}
