#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints
 * all the numbers of base 16 in lowercase
 * Return: 0 if success
 */
int main(void)
{
	int i = 48;
	int ch = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

