#include "main.h"

/**
 * _strncat - Function to concatenate two strings
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: Number of bytes to be concatenated
 * Return: pointer to destination string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
