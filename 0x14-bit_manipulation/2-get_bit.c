#include "main.h"
/**
 * get_bit - returns value of a bit at givien index
 * @index: index we are trying to print
 * @n: number to be evaluated
 * Return: value of at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int r;

	if (index > 63)
		return (-1);

	r = (n >> index) & 1;

	return (r);
}
