#include "main.h"
#include <stdlib.h>
/**
 * _calloc-allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory
 * @nmemb:number of elements
 * @size:size of array
 * Return:pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	unsigned int *zero;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	zero = (unsigned int *) ptr;

	for (i = 0; i < nmemb; i++)
		zero[i] = 0;
	ptr = (void *) ptr;
	return (ptr);
}
