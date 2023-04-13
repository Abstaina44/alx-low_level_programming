#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2 dimensional array of integers
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 *
 * Return: pointer to the newly allocated 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ar;

	if (width == 0 || height == 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(ar[i]);

			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}

	return (ar);
}

