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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
