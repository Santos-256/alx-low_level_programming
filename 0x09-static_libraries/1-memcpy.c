#include "main.h"

/**
 * _memcpy - function that coppies memory
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
