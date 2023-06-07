#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - Specific I/O for char c
 * c: Given character
 * Return 1 if successful, 0 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
