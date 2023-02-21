#include "main.h"
/**
 * print_last_digit -prints the digit of a number
 * @a: is the number whose digit will be printed
 * Return: last digit a
 */
int print_last_digit(int a)
{
	putchar((a % 10) + '0');
	return (a % 10);
}
