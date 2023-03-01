#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
int i, len = 0;

while (dest[i])
{
len++;
i++;
}
for (i = 0; src[i]; i++, len++)
{
dest[len] = src[i];
}
dest[len] = '\0';
return (dest);
}
