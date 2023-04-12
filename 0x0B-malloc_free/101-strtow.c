#include "main.h"
#include <stdlib.h>

/**
 * count - Function to count the number of words in a string
 * @s: String
 *
 * Return: word length
 */
int count(char *s)
{
	int num, len, word;

	num = 0;
	word = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		num = 0;
		if (num == 0)
		{
			num = 1;
		}
	}
	return (word);
}

/**
 * strtow - Function to split a string into words
 * @str: String
 *
 * Return: Pointer to an array of strings
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, k = 0, length = 0, word, c = 0, start, stop;

	while (*(str + length))
		length++;
	word = count(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)

		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				stop = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < stop)
					*tmp++ =  str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	matrix[k] = NULL;
	return (matrix);
}
