#include "main.h"
/**
 * string_toupper - converts every lowercase letter to uppercase in a string
 * @s: string to be converted
 * Return:pointer to a string
 */
char *string_toupper(char *s)
{
int i = 0;

while (s[i])
{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= ('a' - 'A');
	}
	i++;
}
return (s);
}
