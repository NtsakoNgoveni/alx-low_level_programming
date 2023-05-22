#include "main.h"

/**
 * check_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */
int check_sqrt_recursion(int n, int i)
{
if (i * i == n)
	return (i);
else if (i * i > n)
	return (-1);
else
	return (check_sqrt_recursion(n, i + 1));
}

#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
return (check_sqrt_recursion(n, 0));
}
