#include "main.h"
/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @str: input
 * Return: half of the string
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}
