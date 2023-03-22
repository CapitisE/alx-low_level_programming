#include "main.h"

/**
 *  print_last_digit - Program to print the last digit of a number
 *  @num: Number to be used
 *  Return: The value of the digit
 *
 */

int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = num % 10;
	if (lastdigit < 0)
	{
	lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
