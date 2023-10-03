#include "main.h"

/**
 * _islower -detects lowercase letters
 * @c: char to be checked
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
