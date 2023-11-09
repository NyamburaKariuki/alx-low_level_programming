#include <stdio.h>
#include <stdlib.h>
/**
 *main - main entry point
 *@argc: no of arguments
 *@argv: arguments
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *r;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	r = (char *)main;
	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", r[x]);
			break;
		}
		printf("%02hhx", r[x]);
	}
	return (0);
}
