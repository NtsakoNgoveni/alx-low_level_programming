#include "main.h"
/**
 * print_sign - determines wheter a number is negative or positive
 * @a: is the number inspected
 * Return: + if a> 0,- if a<0, 0 if a==a
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
