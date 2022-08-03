#include "3-calc.h"
/**
 * op_add - return the sum of two values
 * @a: first int
 * @b: second int
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the substitution of two values
 * @a: first int
 * @b: second int
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two int value
 * @a: int one
 * @b: int two
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides int values
 * @a: int one
 * @b: int two
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns reminder of the div
 * @a: operand
 * @b: divider
 * Return: reminder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
