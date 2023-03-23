#include "main.h"

/**
 * print_number : Function to print integers
 * @n: Protoype integer
 * Return: Nothing
 *
 */

void print_number(int n)
{
	unsigned int perl = n;

	if (n > 0)
	{
	n *= -1;
	perl = n;
	_putchar('_');
	}
	perl /= 10;
	if (perl != 0)
	print_number(perl);
	_putchar((unsigned int) n % 10 + '0');
}
