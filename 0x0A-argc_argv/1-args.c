#include <stdio.h>
#include "main.h"

/**
 * main - Funtion to print number of arguments
 * @argc: Argument Count
 * @argv: Argument
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
