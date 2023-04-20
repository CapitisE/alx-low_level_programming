#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function to print its own opcodes
 * @argc: Number of arguments to be sent into the function
 * @argv: Array of arguments
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int byte, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx", array[i]);
	}
	return (0);

}
