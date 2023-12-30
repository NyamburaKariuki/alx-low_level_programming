#include "elf.h"
/**
    *_printerror - function to print error
    *@errmsg: error message
    *Return: Always 0 (Success)
    */
void _printerror(const char *errmsg)
{
        fprintf(stderr, "Error is: %s\n", errmsg);
        exit(98);
}
/**
*_readheader - function to read a header file
*@file_name: file name
*Return: Always 0 (Success)
*/
void _readheader(const char *file_name)
{       int x;
        int filedescriptor = open(file_name, O_RDONLY);
        elf header;

        if (filedescriptor == -1)
{
        _printerror("Failed to open file");
}
        if (read(filedescriptor, &header, sizeof(elf)) != sizeof(elf))
{
        _printerror("Failed to read the file header");
}
        if (header.id[0] != 0x7f ||
        header.id[1] != 'E' ||
        header.id[2] != 'L' ||
        header.id[3] != 'F')
{
        _printerror("This is not an ELF file");
}

        printf("magic:   ");
        for (x = 0; x < 16; x++)
        {
                printf("%02x ", header.id[x]);
        }
        printf("\nClass:                           %s\n", header.id[4] == 1 ? "ELF32" : "ELF64");
        printf("Data:                              %s\n", header.id[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
        printf("Version:                           %d (current)\n", header.id[6]);
        printf("OS/ABI:                            %d\n", header.id[7]);
        printf("ABI Version:                       %d\n", header.id[8]);
        printf("Type:                              %d\n", header.type);
        printf("Entry point address:               %#lx\n", header.entry);
        printf("\n");
        close(filedescriptor);
}
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
