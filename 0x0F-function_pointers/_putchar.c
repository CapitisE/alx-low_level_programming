#include <unistd.h>

/**
 * _putchar - Funciton to send char to standard output
 * @c: Char
 *
 * Return: 1 for success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
