#include "main.h"
/**
 * leet - encodes a string by assigning some alphabet characters a digit value
 * a = 4, e = 3, o = 0, t = 7 and l = 1
 * note that both lowwercase and uppercase values of the characters above
 * are encoded
 * @s: is the array to be encoded
 * Return: A pointer to a modified string
 */

char *leet(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] == 'a' || s[i] == 'A')
	s[i] = '4';

	else if (s[i] == 'e' || s[i] == 'E')
		s[i] = '3';

	else if (s[i] == 'o' || s[i] == 'O')
		s[i] = '0';

	else if (s[i] == 't' || s[i] == 'T')
		s[i] = '7';

	else if (s[i] == 'l' || s[i] == 'L')
		s[i] = '1';

	i++;

}
return (s);
}
