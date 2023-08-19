#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints
 * the lowercase alphabet in reverse
 * Return: 0 if success
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
