#include <stdlib.h>
#include "main.h"

/**
 * free_grid - memory allocate for the grid to be freed
 * created by alloc_grid()
 * @grid: free grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
