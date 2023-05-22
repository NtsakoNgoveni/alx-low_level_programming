#include "main.h"
/**
 * _isupper - checks whether a function is uppercase
 * @c:character to be evaluate
 * Return: 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
