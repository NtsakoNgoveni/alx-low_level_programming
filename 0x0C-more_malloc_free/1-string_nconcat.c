#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-concatenates the first n bytes strings two with string one
 * @s1:string one
 * @s2:string two
 * @n:n bytes to be concatenated
 *Return:pointer to a newly allocted memory in space with a the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, len = 0, len2 = 0;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	while (s1[len])
		len++;

	while (s2[len2])
		len2++;

	if (n < len2)
	str = malloc(sizeof(char) * (len + n + 1));

	else (n >= len2)
	str = malloc(sizeof(char) * (len + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (k = 0; k < n; k++, i++)
	{
		if (s2[k] == '\0')
			break;
		str[i] = s2[k];
	}
	str[i] = '\0';
	return (str);
}
