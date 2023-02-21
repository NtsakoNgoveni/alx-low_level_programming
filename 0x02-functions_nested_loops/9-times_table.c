#include "main.h"
/**
 * times_table - prints the 9 times table
 *Return:void
 */
void times_table(void)
{
	int k, i;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 9; i++)
		{
			if ((i * k) >= 10)
			{
				_putchar(i * k / 10 + '0');
				_putchar(i * k % 10 + '0');
			}
			else
				_putchar(i * k + '0');
			if (i != 9 || k != 9)
			{
				if (k >= 2 && i >= 4)
				{
				_putchar(',');
				_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
			}
			}
		}
		_putchar('\n');
	}
}
