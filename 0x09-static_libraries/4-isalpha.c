#include "main.h"
/**
 * _isalpha - checks for alphabetic char
 * @c: the charactor to be checked
 * Return: 1 if c is letter or 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
