#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function to return a pointer to a newly allocated space in memory
 * @str: String
 * Return: NULL if string is null
 */

char *_strdup(char *str)
{
	char *point;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	point = malloc(sizeof(char) * (a + 1));
	if (point == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		point[b] = str[b];
	return (point);
}
