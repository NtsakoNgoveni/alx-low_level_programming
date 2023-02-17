#include <stdio.h>
/**
 * main - prints lower case alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int lc = 'z';

	while (lc >= 'a')
	{	putchar(lc);
		lc--;
	}
	putchar('\n');
	return (0);
}
