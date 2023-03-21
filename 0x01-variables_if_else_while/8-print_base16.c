#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Program to print all the numbers of base 16 in lowercase.
 * Return: 0 (Successful)
 *
 */

int main(void)
{
	int lower16;
	char upper16;

	for (lower16 = '0'; lower16 <= '9'; lower16++)
	putchar(lower16);

	for (upper16 = 'a'; upper16 <= 'f'; upper16++)
	putchar(upper16);
	putchar('\n');

	return (0);

}
