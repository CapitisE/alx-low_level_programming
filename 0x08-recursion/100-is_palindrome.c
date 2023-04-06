#include "main.h"

/**
 * _strlen - Function to determine length of string
 * @s: String to be tested
 *
 * Return: String length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 * _strlen(s + 1));
}


/**
 * _palindrome_check - Function to check if string is palindrome
 * @i: Index
 * @l: String length
 * @s: String in question
 *
 * Return: 1 if palindrome, 0 otherwise
 *
 */

int _palindrome_check(int i, int l, char *s)
{
	if (l > 0)
	{
		if (s[i] == s[l])
		{
			return (_palindrome_check(i + 1, l - 1, s));
		}
		else if (s[i] != s[l])
			return (0);
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - Function to find palindromes
 * @s: String to be tested
 *
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	return (_palindrome_check(0, _strlen(s) - 1, s));
}
