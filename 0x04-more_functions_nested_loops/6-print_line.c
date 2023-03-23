#include "main.h"

/**
 * print_line - function to draw a straight line in the terminal
 * @n: Number of times _ should be printed
 * Return: Straight line
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
