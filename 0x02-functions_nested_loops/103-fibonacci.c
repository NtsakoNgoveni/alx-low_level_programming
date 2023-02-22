#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int i;

	unsigned long int n = 1, k = 2, nxt, sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum = sum + n;
		}
		nxt = n + k;
		n = k;
		k = nxt;
	}
	printf("%lu\n", sum);
	return (0);
}
