#include "main.h"
/**
 *print_numbers - prints 0-9 follwed by new line
 *Return: void
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
	putchar(n + '0');
	n++;
	}
	putchar('\n');
}
