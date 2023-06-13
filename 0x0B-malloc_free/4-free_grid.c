#include "main.h"

/**
 * alloc_grid - function that concatenate
 * @height : the height of grid
 *
 * Return: returns pointer to concatenated
 */

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
{
return;
}

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
