#include <stdio.h>
/**
 * main- prints all argumnets it receives
 * @argc: number of args
 * @argv:array of argumnets
 * Return:0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
	printf("%s\n", *(argv + i));
return (0);
}
