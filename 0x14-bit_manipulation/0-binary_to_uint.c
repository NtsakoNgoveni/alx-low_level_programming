#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string to be converted
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		i = 2 * i + (b[k] - '0');
	}
	return (i);
}
