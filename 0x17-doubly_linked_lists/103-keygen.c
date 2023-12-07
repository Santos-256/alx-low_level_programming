#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: argument vector
 * @argv: argument vector as number pased
 *
 * Return: 0 on success, else 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int index, idx;
	size_t length, add;
	char *ptr = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	p[0] = ptr[(length ^ 59) & 63];
	for (index = 0, add = 0; index < length; index++)
		add += argv[1][index];
	p[1] = ptr[(add ^ 79) & 63];
	for (index = 0, idx = 1; index < length; index++)
		idx *= argv[1][index];
	p[2] = ptr[(idx ^ 85) & 63];
	for (idx = argv[1][0], index = 0; index < length; index++)
		if ((char)idx <= argv[1][index])
			idx = argv[1][index];
	srand(idx ^ 14);
	p[3] = ptr[rand() & 63];
	for (idx = 0, index = 0; index < length; index++)
		idx += argv[1][index] * argv[1][index];
	p[4] = ptr[(idx ^ 239) & 63];
	for (idx = 0, index = 0; (char)index < argv[1][0]; index++)
		idx = rand();
	p[5] = ptr[(idx ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
