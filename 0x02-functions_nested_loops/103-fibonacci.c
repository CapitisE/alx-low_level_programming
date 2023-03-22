#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000
 * Return: Nothing
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = s;

	while (s + j < 4000000)
	{
	s += j;
	if (s % 2 == 0)
	sum += s;
	j = s - j;
	++i;
	}
	pritnf("%ld\n", sum);
	return (0);
}
