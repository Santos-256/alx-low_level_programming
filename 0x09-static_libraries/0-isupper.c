#include "main.h"

/**
 * _isupper - ditects uppercase letters
 * @c: character to be checked
 *
 * Return: 1 on success and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
