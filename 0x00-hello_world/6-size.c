#include <stdio.h>
/**
 * main - This program prints
 * the sizes of various data types;-
 * char,int'long int,long long int,and float
 * Return: return 0 if success
 */
int main(void)
	{
printf("size of a char is %ld: byte(s)\n", sizeof(char));
printf("size of an int is %ld: byte(s)\n", sizeof(int));
printf("size of a long int is: %ld byte(s)\n", sizeof(long int));
printf("size of a long long int is: %ld byte(s)\n", sizeof(long long int));
printf("size of a float is: %ld byte(s)\n", sizeof(float));
return (0);
}
