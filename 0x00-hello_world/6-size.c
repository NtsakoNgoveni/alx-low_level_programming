#include <stdio.h>
/**
 * main - prints sizes of all data type
 * Return: 0 (success)
 */
int main(void)
{
pintf("Size of a char: %zu bytes(s)\n", sizeof(char));
pintf("Size of a int: %zu bytes(s)\n", sizeof(int));
pintf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
pintf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
pintf("Size of a float: %zu bytes(s)\n", sizeof(float));
return (0);
}
