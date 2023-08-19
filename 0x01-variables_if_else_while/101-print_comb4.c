#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints
 * all possible different combinations of three digits.
 * Return: 0 if success
 */
int main(void)
{
	int i;
	int j;
	int k;

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
