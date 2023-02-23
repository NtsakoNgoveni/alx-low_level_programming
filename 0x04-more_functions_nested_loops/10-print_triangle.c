#include "main.h"
/**
 *print_triangle - print a triangle with  character
 *@size: size of the triangle that will be printed
 *Return:void
 */
oid print_triangle(int size)
{
int size, i, k, n;

if (size > 0)
{
for (n = 0; n < size; n++)
{
for (i = n; i < size; i++)
_putchar(' ');
for (k = 0; k < n; k++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
