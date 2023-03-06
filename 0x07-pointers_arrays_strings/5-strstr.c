#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 *in the string haystack.
 * @haystack: the string to check whether a substring is there or not
 * @needle: the string that substring to search for
 * Return: pointer to first occurence of substring.
 */
char *_strstr(char *haystack, char *needle)
{
int i, k, j;
char ptr[1];

for (i = 0; haystack[i]; i++)
{
k = 0;

if (haystack[i] == needle[k])
{
j = i;

while (haystack[i] == needle[k] && needle[k] != '\0')
{
ptr[k] = haystack[i];
i++;
k++;
}
if (ptr - needle == 0)
return (&haystack[j]);
}
}
return (NULL);
}
