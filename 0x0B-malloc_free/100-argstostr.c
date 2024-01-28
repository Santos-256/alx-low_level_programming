#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 * with new lines.
 * @ac: The number of arguments passed to the program.
 * @av: An array of strings or pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int j, k, index, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			str[index++] = av[j][k];
		}
		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
