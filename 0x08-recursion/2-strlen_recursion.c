#include "main.h"

/**
 * _strlen_recursion - Function to return the length of a string
 * @s: String
 * Return: String length
 *
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
