#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Function to reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated by malloc
 * @old_size: Size of the allocated space for ptr, in bytes
 * @new_size: New size of the new memory block, in bytes
 *
 * Return: Pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer, *prev_pointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	pointer = malloc(new_size);
	if (!pointer)
		return (NULL);
	prev_pointer = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer[i] = prev_pointer[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer[i] = prev_pointer[i];
	}
	free(ptr);
	return (pointer);
}
