#include "main.h"
/**
 * _strncat - concatenates two strings to the nth term
 * @dest: string to be combined
 * @src:string to be combined
 * @n: number of terms to combine
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, len = 0;

while (dest[i])
{
	len++;
	i++;
}
for (i = 0; i < n && src[i]; i++, len++)
{
	dest[len] = src[i];
}
dest[len] = '\0';
return (dest);
}
