#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - Function to send standard character to output
 * @c: Character to print
 * Return: 1 if successful, -1 otherwise
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
