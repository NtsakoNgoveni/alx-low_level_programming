#include <stdio.h>
/**
 * main - will find the sum of multiples of 3 and 5
 * Return:0
 */
int main(void)
{
	int n, sum = 0;

	while (n < 1024)
	{
	if ((n % 3) || (n % 5))
	{
	sum += n;
	}
	n++;
	}
	printf("%d\n", sum);
	return (0);
}
