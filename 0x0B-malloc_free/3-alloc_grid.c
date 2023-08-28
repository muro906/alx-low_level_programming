#include"main.h"
/**
 * alloc_grid-Create a 2-D array
 * @width: No of columns 
 * @height: no of rows
 * Return: pointer to the 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);/*Create an array of pointers dynamically*/

	if (ptr == NULL)
		return (ptr);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);/*Create row pointers*/

		if (ptr[x] == NULL)/*Incase one row pointer fails to create then free all and return NULL*/
		{
			for (; x >= 0; x--)
			{
				free(ptr[x]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)/*Intialize each element in the array with 0*/
	{
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}
