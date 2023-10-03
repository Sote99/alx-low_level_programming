#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - make grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **tee;
	int a, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	tee = malloc(sizeof(int *) * height);

	if (tee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		tee[a] = malloc(sizeof(int) * width);

		if (tee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(tee[a]);

			free(tee);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (y = 0; y < width; y++)
			tee[a][y] = 0;
	}

	return (tee);
}





