#include "main.h"
/**
 *_pow_recursion -calculate the power of x to y
 *@x: value to be multipled
 *@y: the number we will raise x to
 *Return: the value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
return (x * _pow_recursion(x, y - 1));
}
