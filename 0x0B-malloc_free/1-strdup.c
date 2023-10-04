#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - used to duplicate a string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *new;
	int j = 0;
	int k = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;
	new = malloc(sizeof(char) * (j + 1));

	if (new == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		new[k] = str[k];
	return (new);
}
