#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times each time one a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, k = 'a';

	while (i < 10)
	{
		k = 'a';
		while (k <= 'z')
		{
			putchar(k);
			k++;
		}
		putchar('\n');
		i++;
	}
}
