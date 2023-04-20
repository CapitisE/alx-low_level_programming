#include "function_pointers.h"

/**
 * int_index - Function to search for an integer
 * @array: Array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: 0 for success, -1 if no element matches or if size <= 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
