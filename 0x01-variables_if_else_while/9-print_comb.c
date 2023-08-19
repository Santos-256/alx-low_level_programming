#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints
 * all possible combinations of single-digit numbers.
 * Return: 0 if success
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
