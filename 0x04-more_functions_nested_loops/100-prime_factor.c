#include <stdio.h>
#include <math.h>

/**
 * main - Function to print the largest prime factor of 612852475143
 * Return: 0 (Successful)
 *
 */

int main(void)
{
	long x, maxf, number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
