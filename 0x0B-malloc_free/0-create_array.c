#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to create array of size size and assign char c
 * @size: Array size
 * @c: Assigned char
 *
 * Return: NULL if size is zero, pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int arr;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (arr = 0; arr < size; arr++)
		str[arr] = c;
	return (str);
}
