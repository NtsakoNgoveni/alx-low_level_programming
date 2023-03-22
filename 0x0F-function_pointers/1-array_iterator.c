#include "function_pointers.h"
/**
 * array_iterator-performs an action specifiedby a function on
 * all elements of the array
 * @array:array to be iteratated over
 * @size:size of array
 * @action:pointer to an function that will perform action on array
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
