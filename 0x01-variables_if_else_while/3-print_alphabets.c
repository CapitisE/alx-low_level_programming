#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program to print the alphabet in lower and uppercase
 * Return: Always (Successful)
 *
 */

int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');
	return (0);

}
