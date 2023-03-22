#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index-searches for an inter in an array
 * @array:pointer to array that must be searched
 * @size:size of the array
 * @cmp:pointer to search function
 * Return: 1 for success -1 for faliure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
