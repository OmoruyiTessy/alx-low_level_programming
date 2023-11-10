#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: number count
 * @argv: arguments vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int t, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (t = 0, add = 0; t < len; t++)
		add += argv[1][t];
	p[1] = l[(add ^ 79) & 63];
	for (t = 0, b = 1; t < len; t++)
		b *= argv[1][t];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], t = 0; t < len; t++)
		if ((char)b <= argv[1][t])
			b = argv[1][t];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, t = 0; t < len; t++)
		b += argv[1][t] * argv[1][t];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, t = 0; (char)t < argv[1][0]; t++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
