#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of a and b
 * @a: The first number
 * @b: The second number
 *
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between a and b
 * @a: The first number
 * @b: The second number
 *
 * Return: Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: The first number
 * @b: The second number
 *
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b
 * @a: The first number
 * @b: The second number
 *
 * Return: Dividend
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: The first number
 * @b: The second number
 *
 * Return: Modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
