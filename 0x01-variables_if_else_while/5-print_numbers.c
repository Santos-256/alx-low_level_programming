#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints
 * all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0 if success
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
