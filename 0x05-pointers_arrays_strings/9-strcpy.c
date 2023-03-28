#include "main.h"

/**
 * char *_strcpy - Function to copy the string pointed to by src
 * @dest: Copy to
 * #src: Copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0, x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
