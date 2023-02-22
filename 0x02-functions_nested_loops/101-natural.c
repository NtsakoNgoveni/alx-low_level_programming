#include <stdio.h>
/**
 * main - will find the sum of multiples of 3 and 5
 * Return:0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 1; n < 1024; n++)
	{
	if ((n % 3) == 0 || (n % 5) == 0)
	{
	sum += n;
	}
	}
	printf("%d\n", sum);
	return (0);
}
