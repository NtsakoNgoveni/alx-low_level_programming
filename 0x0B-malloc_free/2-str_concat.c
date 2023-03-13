#include "main.h"
#include <stdlib.h>
/**
 * str_concat-concatenate two strings and retruns a pointer to the new string
 * @s1:string 1
 * @s2:string 2
 * Return:ponter to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, k;
	char *combo;

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	combo = malloc(sizeof(char) * (i + k + 1));

	if (combo == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		combo[i] = s1[i];

	for (k = 0; s2[k]; k++)
		combo[i] = s2[k];

	return (combo);
}
