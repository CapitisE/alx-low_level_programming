#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function to print output char c
 * @c: Character to print
 *
 * Return: 1 (Successful)
 * Error Prompt: -1 (Fail)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
