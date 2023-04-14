#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *a, *b;
	int length1, length2, length, i, carry, digit1, digit2, *ans, x = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !is_digit(a) || !is_digit(b))
		errors();
	length1 = _strlen(a);
	length2 = _strlen(b);
	length = length1 + length2 + 1;
	ans = malloc(sizeof(int) * length);
	if (!ans)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		ans[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = a[length1] - '0';
		carry = 0;
		for (length2 = _strlen(b) - 1; length2 >= 0; length2--)
		{
			digit2 = b[length2] - '0';
			carry += ans[length1 + length2 + 1] + (digit1 * digit2);
			ans[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			ans[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (ans[i])
			x = 1;
		if (x)
			_putchar(ans[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(ans);
	return (0);
}
