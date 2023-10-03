#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: initial address of memory to be stored
 * @b: the required value
 * @n: number of bytes to be changed
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
