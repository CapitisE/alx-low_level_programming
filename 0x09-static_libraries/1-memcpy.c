#include "main.h"

/**
 * _memcpy - Function to copy memory area
 * @dest: Destination variable
 * @src: Area of copy
 * @n: Number of bytes
 *
 * Return: Pointer to location dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int copy = 0, a = n;

	for (; copy < a; copy++)
	{
		dest[copy] = src[copy];
		n--;
	}
	return (dest);
}
