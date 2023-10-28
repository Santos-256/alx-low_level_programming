#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char hanki;

	hanki = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			hanki = 1;
			_putchar('1');
		}
		else if (hanki == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
