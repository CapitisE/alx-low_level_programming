#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program to print alphabets in lowercase except q and e
 * Return: Always (Successful)
 *
 */

int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower != e && lower != q)
	putchar(lower);
	}
	putchar('\n');
	return (0);

}
