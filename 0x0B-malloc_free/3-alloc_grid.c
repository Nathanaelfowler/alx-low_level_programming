#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - entry point
 * @width: an int
 * @height: an int
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		for (; i < height; i++)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
