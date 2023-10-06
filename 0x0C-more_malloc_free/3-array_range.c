#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int j, memal;

	if (min > max)
		return (NULL);
	memal = max - min + 1;
	ptr = malloc(sizeof(int) * memal);

	if (ptr == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		ptr[j] = min++;
	return (ptr);
}
