#include "main.h"
#include <stdlib.h>

/**
 * cnt_wrd - counts the number of words in a string
 * @s: pointer to a character
 * Return: number of words
 */
int cnt_wrd(char *s)
{
	int g, i, c = 0;

	g = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			g = 0;
		else if (g == 0)
		{
			g = 1;
			c++;
		}
	}
	return (c);
}

/**
 * **strtow - splits a string into words and
 * returns them as an array of strings.
 * @str: a pointer to a character array (string)
 * Return: success
 */

char **strtow(char *str)
{
	char **diag, *shrt;
	int l, j = 0, longi = 0, wrds, p = 0, initial, conc;

	while (*(str + longi))
		longi++;
	wrds = cnt_wrd(str);
	if (wrds == 0)
		return (NULL);

	diag = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (diag == NULL)
		return (NULL);

	for (l = 0; l <= longi; l++)
	{
		if (str[l] == ' ' || str[l] == '\0')
		{
			if (p)
			{
				conc = 1;
					shrt = (char *) malloc(sizeof(char) * (p + 1));
				if (shrt == NULL)
					return (NULL);
				while (initial < conc)
					*shrt++ = str[initial++];
				*shrt = '\0';
				diag[j] = shrt - p;
				j++;
				p = 0;
			}
		}
		else if (p++ == 0)
			initial = l;
	}
	diag[j] = NULL;
	return (diag);
}
