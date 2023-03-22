#include "3-calc.h"
/**
 * op_add-adds two values and returns the sum
 * @a:number to be added
 * @b:number to be added
 * Return:sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub-subtratcs two numbers an returns the difference
 * @a:number to subtract from
 * @b:number to subtract from
 * Return:diffrenece of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul-finds the product of two numbers
 * @a:number 1
 * @b:number 2
 * Return:product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div-finds the result of division of 2 numbers
 * @a: number to be divided
 * @b:number to divide by
 * Return: the result of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod-finds the reaminder of a number
 * @a:to find the remainder of
 * @b:number to divide by
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
