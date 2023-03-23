#include <stdio.h>
#include <stdarg.h>
/**
 *print_all-prints all the  passed arguments
 *@format:format specifier
 *Return:void
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str = "";
char *str1;
va_list args;

if (format == NULL)
{
printf("\n");
return;
}

va_start(args, format);
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", str, va_arg(args, int));
break;
case 'i':
printf("%s%i", str, va_arg(args, int));
break;
case 'f':
printf("%s%f", str, va_arg(args, double));
break;
case 's':
str1 = va_arg(args, char*);
if (str1 == NULL)
str = "(nil)";
printf("%s%s", str, str1);
break;
default:
i++;
continue;
}
i++;
str = ", ";
}
va_end(args);
printf("\n");
}
