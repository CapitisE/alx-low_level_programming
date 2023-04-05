#include "main.h"

/**
 * _puts_recursion - Function to print a string, followed by a new line
 * @s: String
 *
 * Return: 0 (Successful)
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putshcar('\n');
}
