#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints:-
 *  the alphabet in lowercase, and then in uppercase,
 *  followed by a new line.
 *  Return: 0 if success
 */
int main(void)
{
	int ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
