#include "main.h"

/**
 * _islower: function checks whether c is lower case
 * @c: the character to be checked is c
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
