#include <stdio.h>
/**
 * main - prints thee alphabet in lower case then in in upper case
 * Return: 0 (success)
 */
int main(void)
{
	int lc = 'a', uc = 'A';

	while (lc <= 'z')
{		putchar(lc);
		lc++;
}
	while (uc <= 'Z')
{		putchar(uc);
		uc++;
}
	return (0);
}
