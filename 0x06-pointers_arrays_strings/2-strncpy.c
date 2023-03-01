#include "main.h"
/**
 * _strncpy- copies the first n characters of a string
 * @dest: the string that is copied to
 * @src: the string that is copied
 * @n:the number of character that are copied
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i]; i++)
{
	dest[i] = src[i];
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}
return (dest);
}
