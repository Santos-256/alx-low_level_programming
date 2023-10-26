#include <stdio.h>




void str(void) __attribute__ ((constructor));
/**
 *str - prints strings
 * function is executed
 */
void str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
