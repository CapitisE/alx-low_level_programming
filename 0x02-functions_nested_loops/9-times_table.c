#include "main.h"

/**
 * times_table - Program to print the 9 times table from 0
 * Return: No output
 *
 */

void times_table(void)
{
	int a0, b1, c2, d3, e4;

	for (a0 = 0; a0 <= 9; a0++)
	{
	for (b1 = 0; b1 <= 9; b1++)
	{
	c2 = a0 * b1;
	if (c2 > 9)
	{
	d3 = c2 % 10;
	e4 = (c2 - d3) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(e4 + '0');
	_putchar(d3 + '0');
	}
	else
	{
	if (b1 != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c2 + '0');
	}
	}
	_putchar('\n');
	}
}
