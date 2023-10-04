#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * **alloc_grid - a fucntion that returns a pointer
 * to 2-dimensional integer arrays
 * @width: array width
 * @height: array height
 *
 * Return: NULL if width /or height is 0
 * NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int **pro;
	int a;
	int z;

	if (width <= 0 || height <= 0)
		return (NULL);

	pro = malloc(sizeof(int *) * height);

	if (pro == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		pro[a] = malloc(sizeof(int) * width);
		if (pro[a] == NULL)
		{
			for (; a >= 0; a--)
				free(pro[a]);
			free(pro);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (z = 0; z < width; z++)
			pro[a][z] = 0;
	}
	return (pro);
}
