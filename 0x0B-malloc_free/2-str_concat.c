#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cstr;
	int p = 0;
	int q = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[p] != '\0')
		p++;

	while (s2[q] != '\0')
		q++;

	cstr = malloc(sizeof(char) * (p + q + 1));

	if (cstr == NULL)
		return (NULL);

	p = q = 0;
	while (s1[p] != '\0')
	{
		cstr[p] = s1[p];
		p++;
	}

	while (s2[q] != '\0')
	{
		cstr[p] = s2[q];
		p++;
		q++;
	}

	cstr[p] = '\0';
	return (cstr);
}
