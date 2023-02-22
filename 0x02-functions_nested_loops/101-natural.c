#include <stdio.h>
/**
 * main - will find the sum of multiples of 3 and 5
 * Return:0
 */
int main(void)
{
	int n = 1, sum = 0, k = (n % 3), j = (n % 5);

	for (n = 1; n < 1024; n++)
	{
	if ((j == 0) || (k == 0))
	{
	sum += n;
	}
	}
	printf("%d\n", sum);
	return (0);
}
