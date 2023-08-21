#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (*(src + j) != '\0')
	{
		while (k < j)
		{
			dest[k] = src[k];
		}
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
