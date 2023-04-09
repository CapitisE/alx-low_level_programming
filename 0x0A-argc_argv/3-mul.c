#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Function to multiply two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 otherwise
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
