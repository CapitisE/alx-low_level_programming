#include "main.h"

/**
 * _isdigit - Program to check for a digit from 0 to 9
 * @c: Protoype number
 * Return: 1 if c is a digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
