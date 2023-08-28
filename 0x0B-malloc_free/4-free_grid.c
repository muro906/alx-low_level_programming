#include"main.h"
/**
 * free_grid- Frees a 2-D array previously created with alloc_grid
 * @grid: Address of the 2-D array
 * @height: Number of rows
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
