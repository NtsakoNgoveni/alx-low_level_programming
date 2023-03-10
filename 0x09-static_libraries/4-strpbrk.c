#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: function to be searched
 * @accept: items to search for
 * Return: pointer to the first occurence of an item in set.
 */

char *_strpbrk(char *s, char *accept)
{
int i, k;

for (i = 0; s[i]; i++)
{
for (k = 0; accept[k]; k++)
{
if (s[i] == accept[k])
return (&s[i]);
}
}
return (0);
}
