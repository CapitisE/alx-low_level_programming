#include "main.h"

/**
 * _strncpy - Function to copy a string
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: Number of bytes to be used
 * Return: void
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
