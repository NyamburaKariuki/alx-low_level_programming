#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(const char *s);
void fileclose(int fd);
char *add_buffer(char *file);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
