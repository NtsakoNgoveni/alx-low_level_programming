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
int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
