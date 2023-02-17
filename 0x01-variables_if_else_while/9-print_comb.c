#include <stdio.h>
/**
 * main - prints all possible combinations of sigle digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int n = 0;

	for (; n < 10; n++)
	{	putchar(n + '0');
		if (n != 9)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
