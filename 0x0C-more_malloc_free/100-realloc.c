#include"main.h"
/**
 * _realloc- Acts like the stdlib realloc
 * @ptr:pointer argument
 * @old_size: old size of memory block
 * @new_size: The newsize of memory block
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *new;
	char *old_ptr;

	if (ptr == NULL)
	{
		ptr =  malloc(new_size);
		return (ptr);
	} /**case when ptr is NULL and rest aren't*/
	else if (new_size == old_size)/*Case when nothing is allocated or freed*/
		return (ptr);
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	} /*When new is equal to zero then free*/
	new = malloc(new_size);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new[i] = old_ptr[i]; 
		}
	}
	free(ptr);
	return (new);
}

