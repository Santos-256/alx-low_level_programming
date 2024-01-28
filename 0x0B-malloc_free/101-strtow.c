#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to search for.
 *
 * Return: The index count marking the end of
 * the initial word pointed to by str.
 */

int word_len(char *str)
{
	int count = 0, len = 0;

	while (*(str + count) && *(str + count) != ' ')
	{
		len++;
		count++;
	}
	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to search for.
 *
 * Return: The num of words contained within str.
 */
int count_words(char *str)
{
	int num = 0, words = 0, len = 0;

	for (num = 0; *(str + num); num++)
	{
		len++;
	}
	for (num = 0; num < len; num++)
	{
		if (*(str + num) != ' ')
		{
			words++;
			num += word_len(str + num);
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be splited
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int num = 0, word, k, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	word = count_words(str);
	if (word == 0)
	{
		return (NULL);
	}
	strings = malloc(sizeof(char *) * (word + 1));
	if (strings == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < word; k++)
	{
		while (str[num] == ' ')
		{
			num++;
		}
		letters = word_len(str + num);

		strings[k] = malloc(sizeof(char) * (letters + 1));

		if (strings[k] == NULL)
		{
			for (; k >= 0; k--)
			{
				free(strings[k]);
			}
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
		{
			strings[k][l] = str[num++];
		}
		strings[k][l] = '\0';
	}
	strings[k] = NULL;
	return (strings);
}
