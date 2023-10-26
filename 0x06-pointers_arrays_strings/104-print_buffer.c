#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, k, j;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		k = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (j = 0; j < 10; j++)
		{
			if (j < k)
				printf("%02x", *(b + o + j));
			else
				printf("  ");
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = 0; j < k; j++)
		{
			int c = *(b + o + j);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}

