#include "main.h"

/**
 * main - Program to print 10 times the alphabet in lowercase
 * Return: 0 (Successful|)
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	while (i <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
	i++;
	}

}
