#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: destination of copied memory
 *@src: where memory is copied
 *@n: number of bytes to copy
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0; n--, i++)
{
	dest[i] = src[i];
}
return (dest);
}
