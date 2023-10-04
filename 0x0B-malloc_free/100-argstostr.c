#include "main.h"
#include <stdlib.h>

/**
 * argstostr - comcatenates arguments
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int j, k, l = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			m++;
	}
	m += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			str[l] = av[j][k];
			l++;
		}
		if (str[l] == '\0')
		{
			str[l++] = '\n';
		}
	}
	return (str);
}
