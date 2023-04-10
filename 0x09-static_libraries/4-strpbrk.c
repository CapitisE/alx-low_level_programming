#include "main.h"

/**
 * _strpbrk - Function to search for a string for any set of bytes
 * @s: Location of storage
 * @accept: Location of storage
 *
 * Return: Pointer to the byte in s
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (0);
}
