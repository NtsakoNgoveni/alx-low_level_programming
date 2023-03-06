/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be evaluated
 * @accept: string to be compare to the string thats evaluated.
 * Return: number of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, k, num = 0;

for (i = 0; s[i]; i++)
{
	for (k = 0; accept[k]; k++)
	{
		if (s[i] == accept[k])
		{
			num++;
			break;
		}
		else if (accept[k + 1] == '\0')
		return (num);
	}
}
}

