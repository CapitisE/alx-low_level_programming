#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Function to concatenates two strings
 * @s1: String a
 * @s2: String b
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0, b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	concatenate = malloc(sizeof(char) * (a + b + 1));
	if (concatenate == NULL)
		return (NULL);

	a = 0, b = 0;
	while (s1[a] != '\0')
	{
		concatenate[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		concatenate[a] = s2[b];
		a++;
		b++;
	}
	concatenate[a] = '\0';
	return (concatenate);
}
