#include "main.h"

/**
 * print_times_table - Program to print the n times table
 * @n: Prototype for program
 * Return: nothing for n > 15 || n < 0, nothing otherwise
 */

void print_times_table(int n)
{
	int number, multiple, product;

	if (n >= 0 || n <= 15)
	{
	for (number = 0; number <= n; number++)
	{
	_putchar('0');
	for (multiple = 1; multiple <= n; multiple++)
	{
	_putchar(',');
	_putchar(' ');
	product = number * multiple;
	if (product >= 100)
	{
	_putchar((product / 100) + '0');
	_putchar(((product / 10)) % 10 + '0');
	}
	else if (product <= 99 && product >= 10)
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
