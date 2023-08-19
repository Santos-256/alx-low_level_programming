#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints
 *  all single digit numbers of base 10 starting from 0,
 *  followed by a new line.
 *  Return: 0 if success
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
