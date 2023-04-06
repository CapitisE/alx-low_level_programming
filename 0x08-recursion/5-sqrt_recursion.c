#include "main.h"

/**
 * helper_function - Function to find square root
 * @check: Given number
 * @rexist: Root for testing
 *
 * Return: -1 (for no natural root)
 */

int helper_function(int check, int rexist)
{
	if (check * check == rexist)
		return (check);
	else if (check * check > rexist)
		return (-1);
	else
		return (1 * helper_function(check + 1, rexist));
}

/**
 * _sqrt_recursion - Function to return the natural square of a number
 * @n: Given number
 *
 * Return: -1 (for n not a natural root) else return square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper_function(1, n));
}
