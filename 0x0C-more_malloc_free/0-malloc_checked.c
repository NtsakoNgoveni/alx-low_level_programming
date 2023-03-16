#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory for an interger using malloc
 * @b: the intergger to allocate memory for
 * Return:pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
