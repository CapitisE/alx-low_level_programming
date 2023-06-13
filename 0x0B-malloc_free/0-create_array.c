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
	unsigned int ar;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (ar = 0; ar < size; ar++)
		str[ar] = c;
	return (str);
}
