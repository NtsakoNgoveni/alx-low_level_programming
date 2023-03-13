#include "main.h"
#include <stdlib.h>
/**
 * create_array- creat an array on the heap and initializes it with a character
 * @size:size of the array
 * @c:the character used to initialiaze the array
 * Return: pointer the the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
