#include "main.h"
/**
 * times_table - prints the 9 times table
 *Return:void
 */
void times_table(void)
{
	int k, i, x, u, d;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 9; i++)
		{
		x = k * i;
		if (x > 9)
		{
		u = x % 10;
		d = (x - u) /  10;
		_putchar(44);
		_putchar(32);
		_putchar(d + '0');
		_putchar(u + '0');
		}
		else
		{
		if (i != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar(x + '0');
		}
		}
		_putchar('\n');
	}
}

