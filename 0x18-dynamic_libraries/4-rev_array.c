#include "main.h"
/**
 * reverse_array - reverses an interger array
 * @a: the pointer to the array that willbe reversed
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n; i++)
{
n--;
tmp = a[n];
a[n] = a[i];
a[i] = tmp;
}
}
