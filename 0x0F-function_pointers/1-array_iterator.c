#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function to execute a function given as a
 * parameter on each element of an array
 * @size: Size of the array
 * @action: Pointer to needed function
 * @array: Array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ui;

	if (array == NULL || action == NULL)
		return;
	for (ui = 0; ui < size; ui++)
	{
		action(array[ui]);
	}
}
