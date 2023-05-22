#include "main.h"
/**
 *_isalpha - checks wheter a character is an alphabet
 *@a: character that will be checked whether its an alpha bet or not
 *Return: 1 if a is a letter return 0 if not
 */
int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'z'))
		return (1);
	else
		return (0);
}
