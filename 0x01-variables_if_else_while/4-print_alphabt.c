#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints
 *  all the lowercase alphabetical letters except 'q' and 'e'
 *  Return: 0 if success
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
