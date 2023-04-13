#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Function to create an array of integers
 * @min: Minimum integer
 * @max: Maximum integer
 * Return: Pointer to newly created array
 *
 */

int *array_range(int min, int max)
{
	int *pointer, i, range = max - min, size;

	if (min > max)
		return (NULL);
	size = range + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pointer[i] = min++;
	return (pointer);
}
