#include"function_pointers.h"
/**
 * array_iterator- Executes function on each element in the array
 * @array: parameter
 * @size: parameter
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size == NULL || action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
