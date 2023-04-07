#include "main.h"
/**
 * set_bit - sets value of abit to 1 at a given index
 * @n: pointer to number that will be manipulated
 * @index: index of the bit theat should be set to 1
 * Return: 1 if successful and -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int one = 1;

	if (index > 63)
		return (-1);

	*n = (one << index) | *n;
	return (1);
}
