#include "main.h"
/**
 * _strchr - checks if a character is in a strings
 * @s: string to be evaluated
 * @c: character to search for
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
	if (s[i] == c)
	return (&s[i]);
}
return (0);
}
