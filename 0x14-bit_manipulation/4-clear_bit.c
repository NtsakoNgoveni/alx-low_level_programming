#include "main.h"
/**
 * clear_bit - sets the value of a bit to zero at a given index
 * @n: pointer to number to be manipulated
 * @index: index of bit to be set to zero
 * Return: 1 for success and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index > 63)
		return (-1);

	*n = (~(one << index)) | *n;
	return (1);
}
