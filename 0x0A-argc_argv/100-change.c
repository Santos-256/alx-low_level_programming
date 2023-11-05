#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if Error
 */

int main(int argc, char *argv[])
{
	int n, i, outcome;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	outcome = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			outcome++;
			n -= coins[i];
		}
	}
	printf("%d\n", outcome);
	return (0);
}
