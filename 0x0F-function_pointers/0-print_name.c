#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function to print a name
 * @name: String to add
 * @f: Function pointer
 *
 * Return: Nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
