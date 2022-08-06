#include "3-calc.h"

/**
 * op_add - perform addition
 * @a: The first operand
 * @b: The 2nd operand
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - perform sub
 * @a: The 1st operand
 * @b: the 2nd operand
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - perform multiplication
 * @a: The first operand
 * @b: The 2nd mul
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calcs the div of two int
 * @a: 1st int
 * @b:2nd int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calcs the rem of div between 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}