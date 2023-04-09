#include <stdio.h>
#include "main.h"

/**
 * main - Function to print all received arguments
 * @argc: Argument count
 * @argv: Argument
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int amount = 0;

	if (argc > 0)
	{
		while (amount < argc)
		{
			printf("%s\n", argv[amount]);
			amount++;
		}
	}
	return (0);
}
