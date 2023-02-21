#include "main.h"
/**
 * print_last_digit -prints the digit of a number
 * @a: is the number whose digit will be printed
 * Return: last digit a
 */
int print_last_digit(int a)
{
	int lst = a % 10;

	if (a < 0)
		lst = lst * (-1);
	putchar(lst + '0');
	return (lst);
}
