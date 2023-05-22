#include "main.h"
/**
 *factorial -calculate the factorial of n
 *@n: value to be calculated
 *Return: factorial of n
 */
int factorial(int n)
{
if (n == 1 || n == 0)
	return (1);
else if (n < 0)
	return (-1);
return (n * factorial(n - 1));
}
