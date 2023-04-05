#include "main.h"

/**
 * _pow_recursion - Function to return the value of x raised to power y
 * @x: Given number
 * @y: Index
 *
 * Return: x^y
 * Error Prompt: -1 (for y < 0)
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
