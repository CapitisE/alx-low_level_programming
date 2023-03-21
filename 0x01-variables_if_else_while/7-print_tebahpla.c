#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Program to print lowercase alphabet in reverse.
 * Return: 0 (Successful)
 *
 */

int main(void)
{
	char reverselower;

	for (reverselower = 'z'; reverselower >= 'a'; reverselower--)
	putchar (reverselower);
	putchar ('\n');
	return (0);

}
