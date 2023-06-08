#include "main.h"

/**
 * factorial - Function to find the factorial of a given number
 * @n: Given number
 *
 * Return: Factorial
 * Error PRompt: -1 (for n < 0)
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
