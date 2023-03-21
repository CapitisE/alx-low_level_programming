#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Program to print all possible combinations of single digit numbers
 * Return: 0 (Successful)
 *
 */

int main(void)
{
	int combination;

	for (combination = '0'; combination <= '9'; combination++)
	{
	if (combination != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
