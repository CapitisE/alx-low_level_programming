#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String
 * @c: Character
 * Return: pointer to the first occurence of the character
 *
 */

char *_strchr(char *s, char c)
{
	int locate = 0;

	for (; s[locate] >= '\0'; locate++)
	{
		if (s[locate] == c)
			return (&s[locate]);
	}
	return (0);
}
