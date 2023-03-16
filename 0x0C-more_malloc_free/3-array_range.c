#include "main.h"
#include <stdlib.h>
/**
 * array_range-creates an array of intergers for from min to max
 * @min:min vaalue of array
 * @max:max value of array
 * Return:pointer to array of intergers
 */

int *array_range(int min, int max)
{
	int i, k;
	int *range;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);

	for (i = min, k = 0; i <= max; i++, k++)
		range[k] = i;

	return (range);
}
