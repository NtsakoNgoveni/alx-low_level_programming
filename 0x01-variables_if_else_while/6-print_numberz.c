#include <stdio.h>
/**
 * main - single digits of base 10 using putchar
 * Return: 0 (successs)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10 ; num++)
	{	putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
