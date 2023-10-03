#include "main.h"
/**
 * _atoi - converts a string in to an integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int j = 1;
	int k = 0;
	unsigned int i = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			j *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		i = (i * 10) + (s[k] - '0');
		k++;
	}
	i *= j;
	return (i);
}
