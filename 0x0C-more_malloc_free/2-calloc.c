#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @m: memory area to be filled
 * @a: char to copy
 * @num: number of times to copy a
 * Return: pointer to the memory area m
 */

char *_memset(char *m, char a, unsigned int num)
{
	unsigned int r;

	for (r = 0; r < num; r++)
	{
		m[r] = a;
	}
	return (m);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
