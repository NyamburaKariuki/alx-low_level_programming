#ifndef ELF_H
#define ELF_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
typedef struct 
{
unsigned char id[16];
uint16_t type;
uint64_t entry;
uint16_t machine;
uint16_t phentsize;
uint32_t version;
uint16_t shstrndx;
uint64_t phoff;
uint64_t shoff;
uint32_t flags;
uint16_t ehsize;
uint16_t phnum;
uint16_t shnum;
} elf;
void _printerror(const char *errmsg);
void _readheader(const char *file_name);
#endif
