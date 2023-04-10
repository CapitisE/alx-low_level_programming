#include <stdio.h>
#include "main.h"

/**
 * _atoi - function to convert string to integer
 * @s: String
 * Return: Integer
 */

int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, length = 0, x = 0, num = 0;

	while (s[length] != '\0')
		length++;
	while (a < length && x == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			x = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			x = 0;
		}
		a++;
	}
	if (x == 0)
		return (0);
	return (c);
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
