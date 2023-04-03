#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function to print the sum of two diagonals
 * of a square matrix of integers
 * @a: First Input
 * @size: Second Input
 * Return: 0 (Successful)
 */

void print_diagsums(int *a, int size)
{
	int firstnum = 0, secnum = 0, add;

	for (add = 0; add < size; add++)
	{
		firstnum = firstnum + a[add * size + add];
	}
	for (add = size - 1; add >= 0; add--)
	{
		secnum += a[add * size + (size - add - 1)];
	}
	printf("%d, %d\n", firstnum, secnum);
}
