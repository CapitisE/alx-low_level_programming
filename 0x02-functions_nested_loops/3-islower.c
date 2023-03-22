#include "main.h"

/**
 * int _islower(int c) - Program to check for lowercase character
 *
 * int c: Serves a protype
 * 
 * Return: 1 (if int c is lowercase), 0 (in all other conditions)
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}

	return (0);
}
