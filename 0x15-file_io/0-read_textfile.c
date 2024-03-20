#include "main.h"

/**
  *read_textfile - function to read the contents of a file
  *@filename: file to be read
  *@letters: content of the file
  *Return: Always 0 (Success)
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des = open(filename, O_RDONLY);
	ssize_t read_bytes;
	ssize_t wbytes;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	if (file_des == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_des);
		return (0);
	}
	read_bytes = read(file_des, buf, letters);
	if (read_bytes == -1)
	{
		free(buf);
	close(file_des);
	return (0);
	}
	wbytes = write(STDOUT_FILENO, buf, read_bytes);
	if (wbytes == -1 || wbytes != read_bytes)
	{
		free(buf);
		close(file_des);
		return (0);
	}
	free(buf);
	close(file_des);
	return (read_bytes);
}
