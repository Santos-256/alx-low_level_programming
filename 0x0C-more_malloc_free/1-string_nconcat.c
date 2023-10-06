#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j = 0, k = 0, longi1 = 0, longi2 = 0;

	while (s1 && s1[longi1])
		longi1++;
	while (s2 && s2[longi2])
		longi2++;
	if (n < longi2)
		s = malloc(sizeof(char) * (longi1 + n + 1));
	else
		s = malloc(sizeof(char) * (longi1 + longi2 + 1));
	if (!s)
		return (NULL);
	while (j < longi1)
	{
		s[j] = s1[j];
		j++;
	}
	while (n < longi2 && j < (longi1 + n))
		s[j++] = s2[k++];
	while (n >= longi2 && j < (longi1 + longi2))
		s[j++] = s2[k++];
	s[j] = '\0';
	return (s);
}
