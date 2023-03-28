#include "main.h"

/**
 * puts2 - Function to print only one character of a string, starting with the
 * first character, followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0, t = 0, o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
		_putchar(str[o]);
		}
	}
	_putchar('\n');
}
