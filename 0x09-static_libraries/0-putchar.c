#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to standared output
 * @c: charactor to print
 * Return: 1 if success, or -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
