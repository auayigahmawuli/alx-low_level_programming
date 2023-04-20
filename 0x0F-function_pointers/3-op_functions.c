#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Return the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the substraction of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiplication of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Returns the quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the reminder of the division of two numbers
 * @a: The first number
 * @b: The  second number
 *
 * Return: 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
