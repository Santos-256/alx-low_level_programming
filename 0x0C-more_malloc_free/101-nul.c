#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (0);
}

/**
 * error - handles errors for main
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int longi1, longi2, longi, j, take, num1, num2, *result, p = 0, is_digit;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	longi1 = _strlen(s1);
	longi2 = _strlen(s2);
	longi = longi1 + longi2 + 1;
	result = malloc(sizeof(int) * longi);
	if (!result)
		return (1);
	for (j = 0; j <= longi1 + longi2; j++)
		result[j] = 0;
	for (longi1 = longi1 - 1; longi1 >= 0; longi1--)
	{
		num1 = s1[longi1] - '0';
		take = 0;
		for (longi2 = _strlen(s2) - 1; longi2 >= 0; longi2--)
		{
			num2 = s2[len2] - '0';
			take += result[longi1 + longi2 + 1] + (num1 * digit2);
			result[longi1 + longi2 + 1] = take % 10;
			take /= 10;
		}
		while (take > 0)
			result[longi1 + longi2 + 1] += take;
	}
	for (j = 0; j < longi - 1; j++)
	{
		if (result[j])
			p = 1;
		if (p)
			_putchar(result[i] + '0');
	}
	if (!p)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
