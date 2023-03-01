#include "main.h"
/**
 * cap_string - changes the first word of every word in a  string to uppercase.
 * @str: the string to be capitalized
 * Return: A converted string
 */
char *cap_string(char *str)
{
int k, i, len = 0;

char sp[] =	{' ', '\t', '\n', ',', ';', '.',
		'!', '?', '\"', '(', ')', '{', '}'};


for (i = 0; str[i]; i++)
	len++;

for (i = 1; i < len; i++)
{
	for (k = 0; k < 13; k++)
	{
		if (str[i] == sp[k] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
		str[i + 1] -= ('a' - 'A');
		}
	}
}
if (str[0] == 'a' && str[0] == 'z')
str[0] -= ('a' - 'A');
return (str);
}
