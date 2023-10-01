#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value to return a square root
 * @i: iterator
 * Return: given square root
 */
int _sqrt_recursion(int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}

