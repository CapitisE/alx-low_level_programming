#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"

/**
 * is_digit - Funtion to check for digits
 * @s: String
 *
 * Return: 0 for sucess, 1 for non-digit
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Function to return length of a string
 * @s: String
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - Function to return error for function main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main -Function to multiply two positive numbers
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: 0 (Successful)
 *
 */

int main(int argc, char *argv[])
{
	char *a, *b;
	int length1, length2, length, i, cart, digit1, digit2, *ans, x = 0;

	a = argv[1];
	b = argv[2];
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
		cart = 0;
		for (length2 = _strlen(b) - 1; length2 >= 0; length2--)
		{
			digit2 = b[length2] - '0';
			cart += ans[length1 + length2 + 1] + (digit1 * digit2);
			ans[length1 + length2 + 1] = cart % 10;
			cart /= 10;
		}
		if (cart > 0)
			ans[length1 + length2 + 1] += cart;
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
