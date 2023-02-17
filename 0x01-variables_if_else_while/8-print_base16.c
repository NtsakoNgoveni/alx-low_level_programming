#include <stdio.h>
/**
 * main - prints all hex digits
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0, alpha = 'a';

	while (num < 10)
	{	putchar(num + '0');
		num++;
	}
	while (alpha <= 'f')
	{	putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
