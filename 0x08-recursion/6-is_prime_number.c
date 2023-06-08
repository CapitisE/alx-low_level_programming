#include "main.h"

/**
 * helper_function - Function to check for prme number
 * @n: Number to be checked
 * @f: Factor of n
 *
 * Return: 0 if prime, 1 otherwise
 */

int helper_function(int n, int f)
{
	if (f > n)
	{
		if (n % f == 0)
			return (0);
		else
			return (1 * helper_function(n, f + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - Function to determine if a number is prime
 * @n: Number to be tested
 *
 * Return: 1 if n is prime, else returns 0
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helper_function(n, 2));
}
