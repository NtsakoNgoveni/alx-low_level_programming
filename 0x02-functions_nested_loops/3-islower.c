#include "main.h"
/**
 * _islower - chchecks wheter a a character is lower case
 * @a: will be the character that is inspected
 *Return:1 if alphabet is lower
 *Return : 0 if not
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
