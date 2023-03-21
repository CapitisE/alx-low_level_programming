#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program to print alphabets in lowercase.
 * Return: Always (Successful)
 *
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (lower = 'A'; lower <= 'Z'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);

}
