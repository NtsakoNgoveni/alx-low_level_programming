#include <stdio.h>
/**
 * main - will find the sum of multiples of 3 and 5
 * Return:0
 */
int main(void)
{
	int n = 1, sum = 0;

	while (n < 1024)
	{
	if ((n % 3 = 0) || (n % 5 = 0))
	{
	sum += n;
	}
	n++;
	}
	printf("%d\n", sum);
	return (0);
}
