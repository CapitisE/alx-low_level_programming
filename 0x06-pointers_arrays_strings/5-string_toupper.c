#include "main.h"

/**
 * string_toupper - Function to convert lowercase to uppercase
 * @n: Pointer
 * Return: n
 *
 */

char *string_toupper(char *n)
{
	int lower = 0;

	while (n[lower] != '\0')
	{
		if (n[lower] >= 'a' && n[lower] <= 'z')
			n[lower] = n[lower] - 32;
		lower++;
	}
	return (n);
}
