#include "main.h"

/**
 * reverse_array - Function to reverse that content of an array of integers
 * @a: Array
 * @n: Number of elements of an array
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
