#include <unistd.h>

/**
 * _putchar - Function to send char to stdout
 * @c: Character
 *
 * Return: 1 for success, -1 for error
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
