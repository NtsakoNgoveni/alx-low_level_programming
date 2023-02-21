#include "main.h"
/**
 * times_table - prints the 9 times table
 *Return:void
 */
void times_table(void)
{
	int k, i, x, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
		z = x * y;
		if (z > 9)
		{
		u = z % 10;
		d = (z - u) /  10;
		_putchar(44);
		_putchar(32);
		_putchar(d + '0');
		_putchar(u + '0');
		}
		else
		{
		if (x != 0)
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

