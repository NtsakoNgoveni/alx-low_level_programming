#include <stdio.h>
/**
 * main- prints combo of all possible combos of three single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
int one = 0, two = 1, tree = 2;

for (one = 0; one <= 7; one++)
	{
	for (two = 1; two <= 8; two++)
	{
		for (tree = 2; tree <= 9; tree++)
		{
			if (tree > two && two > one)
				{
				putchar(one + '0');
				putchar(two + '0');
				putchar(tree + '0');

				if ((two != 8) || (one != 7))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

