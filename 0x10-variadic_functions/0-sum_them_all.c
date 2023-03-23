#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all-sums all the arguments passed in the parameter
 *@n:number of arguments that will be passed
 *Return:sum of all arguments expect n
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
unsigned int i;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);

return (sum);
}
