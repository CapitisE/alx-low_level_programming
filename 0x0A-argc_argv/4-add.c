#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check - Function to check for digits within a string
 * @s: String
 * Return: 0 (Successful)
 */

int check(char *s)
{
	unsigned int count = 0;

	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - Function to add positive numbers
 * @argc: Argument count
 * @argv: Argument vartiable
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int count = 1, str_to_int, sum = 0;

	while (count < argc)
	{
		if (check(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
