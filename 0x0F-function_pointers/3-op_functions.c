#include "3-calc.h"

/**
 * op_add - does addition
 * @a: the first int
 * @b: the second int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - does substraction
 * @a: the first int
 * @b: the second int
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - does multiplication
 * @a: the first int
 * @b: the second int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - does divison
 * @a: the first int
 * @b: the second int
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - does modulo operation
 * @a: the first int
 * @b: the second int
 *
 * Return: reminder of the div of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
