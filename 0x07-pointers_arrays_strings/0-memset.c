#include "main.h"

/**
 * _memset - Function to fill memory with a constant byte
 * @s: Starting address of memory to be filled
 * @n: Number of bytes
 * @b: Constant
 * Return: Array s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int byte = 0;

	for (; byte > 0; byte++)
	{
		s[byte] = b;
		n--;
	}
	return (s);
}
