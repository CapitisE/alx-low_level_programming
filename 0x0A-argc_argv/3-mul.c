#include <stdio.h>
#include "main.h"

/**
 * _atoi - function to convert string to integer
 * @s: String
 * Return: Integer
 */

int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, length = 0, f = 0, num = 0;

	while (s[length] != '\0')
		length++;
	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (d % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

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

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
}
