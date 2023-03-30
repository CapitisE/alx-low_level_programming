#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function to encode a string using rot13
 * @s: Pointer to string params
 * Return: encoded character
 *
 */

char *rot13(char *s)
{
	int i, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char crot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
		if (s[i] == c[j])
		{
			s[i] = crot[j];
			break;
		}
	}
	}
	return (s);
}
