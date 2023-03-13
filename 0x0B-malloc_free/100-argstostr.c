#include "main.h"
#include <stdlib.h>
/**
 * argstostr-concatenates all arguments
 * @ac:argument count
 * @av:array of arguments
 * Return:pointer to a combination of all the arguments
 */

char *argstostr(int ac, char **av)
{
	int i = 0, k = 0, j = 0, len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
			len++;
	}
	len += ac;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++, j++)
		ptr[j] = av[i][k];

		if (ptr[j++] == '\0')
		ptr[j] = '\n';
	}
	ptr[j] = '\0';
	return (ptr);
}

