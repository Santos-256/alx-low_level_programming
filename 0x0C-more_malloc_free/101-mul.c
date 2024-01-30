#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_pdt(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Finds the length of a string.
 *
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int count = 0;

	while (*str++)
		count++;

	return (count);
}

/**
 * create_xarray - Creates an array of chars and initializes it with
 * the character 'x'. Adds a terminating null byte.
 *
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 * function exits with a status of 98.
 *
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}

/**
 * iterate_zeroes - Iterates through a string of numbers containing
 * leading zeroes until it hits a non-zero number.
 *
 * @str: The string of numbers to be iterated through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 *
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 * exits with a status of 98.
 *
 * Return: The converted int.
 */
int get_digit(char c)
{
	int num = c - '0';

	if (num < 0 || num > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (num);
}

/**
 * get_pdt - Multiplies a string of numbers by a single digit.
 *
 * @pdt: The buffer to store the result.
 *
 * @mult: The string of numbers.
 *
 * @digit: The single digit.
 *
 * @zeroes: The necessary number of leading zeroes.
 *
 * Description: If mult contains a non-digit, the function
 * exits with a status value of 98.
 */
void get_pdt(char *pdt, char *mult, int digit, int zeroes)
{
	int mult_len, index, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*pdt)
	{
		*pdt = 'x';
		pdt++;
	}

	pdt--;

	while (zeroes--)
	{
		*pdt = '0';
		pdt--;
	}

	for (; mult_len >= 0; mult_len--, mult--, pdt--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		index = (*mult - '0') * digit;
		index += tens;
		*pdt = (index % 10) + '0';
		tens = index / 10;
	}

	if (tens)
		*pdt = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 *
 * @final_prod: The buffer storing the running final product.
 *
 * @next_prod: The next product to be added.
 *
 * @next_len: The length of next_prod.
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int digit, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		digit = (*final_prod - '0') + (*next_prod - '0');
		digit += tens;
		*final_prod = (digit % 10) + '0';
		tens = digit / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		digit = (*next_prod - '0');
		digit += tens;
		*final_prod = (digit % 10) + '0';
		tens = digit / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 *
 * @argv: The number of arguments passed to the program.
 *
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 * contains non-digits, the function exits with a status of 98.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, num, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (num = find_len(argv[2]) - 1; num >= 0; num--)
	{
		digit = get_digit(*(argv[2] + num));
		get_pdt(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (num = 0; final_prod[num]; num++)
	{
		if (final_prod[num] != 'x')
			putchar(final_prod[num]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
