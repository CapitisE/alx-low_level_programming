#include "main.h"

/**
 * more_numbers - Program to print numbers in multiples of 10
 * from 0 to 14
 * Return: 0 (Successful)
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
