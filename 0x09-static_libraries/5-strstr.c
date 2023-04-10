#include "main.h"

/**
 * _strstr - Function to locate a substring
 * @haystack: String
 * @needle: Substring
 * Return: Pointer to the beginning of the located substring
 * or NULL, if substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack, *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
