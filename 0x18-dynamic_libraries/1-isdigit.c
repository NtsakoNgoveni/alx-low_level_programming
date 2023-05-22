#include "main.h"
/**
 * _isdigit - checks if n is a digit within 0-9
 * @n: input to be evaluated
 * Return: 1 if n is digit otherwise 0
 */
int _isdigit(int n)
{
if (n >= '0' && n <= '9')
	return (1);
else
	return (0);
}
