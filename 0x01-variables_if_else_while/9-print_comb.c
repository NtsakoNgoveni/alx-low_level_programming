#include <stdio.h>
/**
 * main - prints all possible combinations of sigle digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{	putchar(n + '0');
		n++;
	}
	while (n < 9)
	{	putchar(',');
		n++;
	}
	while (n < 10)
	{
		putchar(' ');
		n++;
	}
	return (0);
}
