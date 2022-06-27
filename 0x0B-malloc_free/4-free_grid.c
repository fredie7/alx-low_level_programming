#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid previously
 * created by your alloc_grid function.
 * @grid : array grid
 * @height : array grid height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int j;
j = 0;
while (j < height)
{
free(grid[j]);
j++;
}
free(grid);
}
