#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers-prints numbers that are passed as arguments
 *@n:number of arguments that will be passed
 *@seperator:the string that will seperator the numbers
 *Return:void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
unsigned int i;


va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if ((i + 1) != n && seperator != NULL)
printf("%s", seperator);
}

va_end(args);
printf("\n");
}
