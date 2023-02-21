#include "main.h"
/**
 * jack_bauer - counts time from 00:00 t0 23:59
 *@void - function returns void
 *Return:void
 */
void jack_bauer(void)
{
	int k, i;

	for (k = 0; k <= 23; K++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_puthar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
}
