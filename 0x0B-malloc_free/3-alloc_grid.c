#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - two dimensional of ints to be created
 * @width: matrix width
 * @height: matric height
 *
 * Return: matrix created pointer (success), or NULL (error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = (int *) malloc(sizeof(int *) * width);
		if (array[a] == NULL)
		{
			free(array);
			for (b = 0; b <= a; b++)
				free(array[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
