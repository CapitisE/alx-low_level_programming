#include "main.h"

/**
 * _abs - Program to compute the absolute value of an integer
 * @n: Prototype for program
 * Return: Absolute number (Successful)
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
	int absolute;

	absolute = n * -1;
	return (absolute);
	}
	return (n);
}
