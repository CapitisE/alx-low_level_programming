#include "main.h"

/**
 * main - Program to print the alphabet in lowercase
 * Return: 0 (Successful)
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
