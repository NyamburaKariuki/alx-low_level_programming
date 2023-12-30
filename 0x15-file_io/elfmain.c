#include "elf.h"
/**
  *main - main entry
  *@argc: number of arguments
  *@argv: arguments
  *Return: Always 0 (Success)
	  */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	_readheader(argv[1]);
	return (0);
}
