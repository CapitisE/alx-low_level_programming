#include <unistd.h>

/**
 * _putchar - function to send char c to standard output
 * @c: Character
 *
 * Return: 1 if successful, -1 otherwise
 */

int _putchar(char *c)
{
	return (write(1, &c, 1));
}
