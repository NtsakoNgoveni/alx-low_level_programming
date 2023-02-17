#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints last digit of random number
 * Return: 0 (success)
 */
int main(void)
{
	int n, end_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	end_num = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, end_num);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, end_num);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, end_num);
	return (0);
}
