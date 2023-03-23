#include "main.h"
#include <stdio.h>

/**
 * print_number - Function to print integers
 * @n: Protoype integer
 *
 * Return: Nothing
 *
 */

void print_number(int n)
{
	unsigned int perl;

	if (n < 0)
	{
	perl = -n;
	_putchar('-');
	}
	else
	{
	perl = n;
	}
	if (perl / 10)
	{
	print_number(perl / 10);
	}
	_putchar((perl % 10) + '0');
}
