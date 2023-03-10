#include <stdio.h>
/**
 * main- prints number of arguments passed to it
 * @argc:number of arguments
 * @argv:array of pointers to pointing to argumnets
 * Return:0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
