#include <stdio.h>
/**
 * main- prints the alphabet with the exclusion of q and e
 * Return: 0 (success)
 */
int main(void)
{
	int lc = 'a';

	while (lc <= 'z')
	{
		if (lc == 'q' || lc == 'e')
			continue;
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
