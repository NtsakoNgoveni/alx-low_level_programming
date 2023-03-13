#include "main.h"
#include <stdlib.h>
/**
 * _strdup- is it coppies the string into a new memory on the heap
 * @str:is the string to be copied
 * Return: a pointer to address containing the duplicate of (str)
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];

	return (ptr);
}
