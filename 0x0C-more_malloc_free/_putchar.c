#include <unistd.h>
#include "main.h"

/**
 * _putchar - Function to send char to standard output
 * @c: String
 * Return: 1 for success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
