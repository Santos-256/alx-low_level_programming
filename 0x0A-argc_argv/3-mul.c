#include <stdio.h>
#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/
int _atoi(char *s)
{
	int i, j, k, longi, f, digit;




	i = 0;
	j = 0;
	k = 0;
	longi = 0;
	f = 0;
	digit = 0;


	while (s[longi] != '\0')
		longi++;
	while (i < longi && f == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (k);
}
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
