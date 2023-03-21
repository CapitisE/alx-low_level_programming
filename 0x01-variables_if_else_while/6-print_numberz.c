#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program to print all single digit numbers of base 10
 * Return: 0 (Successful)
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	putchar('\n');
	}
	return (0);

}
