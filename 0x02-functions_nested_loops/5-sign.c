#include "main.h"

/**
 * print_sign - Program to print the sign of a number
 * @n: Protoype for program
 * Return: 1 for positive numbers, -1 for negative numbers, 0 for other cases
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
