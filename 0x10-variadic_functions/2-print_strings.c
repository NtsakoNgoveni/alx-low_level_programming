#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings-prints strings that are passed as arguments
 *@n:number of arguments that will be passed
 *@seperator:the string that will seperator the strings
 *Return:void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
if (str == NULL)
str = "(nil)";

printf("%s", str);

if ((seperator != NULL) && ((i + 1) != n))
printf("%s", seperator);

}
printf("\n");
va_end(args);
}
