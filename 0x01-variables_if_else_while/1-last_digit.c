#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - This program program prints
*  the last digit of the number stored in the variable n.
*  Return: return 0 if success
*/
	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	printf("Last digit of n is %d and is greater than 5", n);
	else if (n == 0)
{
	printf("Last digit of n is %d and is 0", n);
}
	else
	printf("Last digit of n is %d and is less than 6 and not 0", n);
	return (0);
}
