#include "main.h"
#include <stdlib.h>

/**
 * *_memset - Function to allocate memory for an array using malloc
 * @s: Memory area to be filled
 * @c: Char to copy
 * @n: Number of times to copy c
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}

/**
 * *_calloc - Function to allocate memory for an array, using malloc
 * @nmemb: Number of elements in the array
 * @size: Number of bytes
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int ans = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, ans);
	return (ptr);
}
