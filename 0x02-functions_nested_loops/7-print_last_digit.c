#include "main.h"
/**
 * print_last_digit -prints the digit of a number
 * @a: is the number whose digit will be printed
 * Return: last digit a
 */
int print_last_digit(int a)
{
	int i = (-1);

	if (a < 0)
	{
	_putchar(((a * i) % 10) + '0');
	return ((a * i) % 10);
	}
	else
	{
		_putchar((a % 10) + '0');
		return (a % 10);
	}
}
