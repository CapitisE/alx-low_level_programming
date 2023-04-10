#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Function to print minimum number of coins to
 * make change for an amount of money
 * @argc: Argument count
 * @argv: Argument variable
 *
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int num, money, change, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	change = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (money = 0; money < 5 && num >= 0; money++)
	{
		while (num >= coins[money])
		{
			change++;
			num -= coins[money];
		}
	}
	printf("%d\n", change);
	return (0);
}
