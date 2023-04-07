#include "main.h"
/**
 * flip_bits - number of bits to fliped toget from number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = (n ^ m) >> i;
		if (current & 1)
			num++;
	}

	return (num);
}
