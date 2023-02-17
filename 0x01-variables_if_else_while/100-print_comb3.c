#include <stdio.h>
/**
 * main- prints all combinations off number from 0 to 99
 * Return: 0 (passed)
 */
int main(void)
{
	int l = 0 , f = 1;

	for (l = 0; l <= 8; l++)
	{
		for (f = 1; f <= 9; f++)
		{
			if (f > l)
			{
			putchar('l');
			putchar('f');
			if ((f != 9) && (l != 8))
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	return (0);
}
