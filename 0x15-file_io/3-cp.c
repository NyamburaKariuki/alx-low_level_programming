#include "main.h"

/**
 * add_buffer - function that allocates 1024 bytes for a buffer.
 * @file: pointer to the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *add_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * fileclose - function that closes file descriptors.
 * @fd: file descriptor to be closed.
  * Return: No return.
 */
void fileclose(int fd)
{
	int close_file;

	close_file = close(fd);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: pointer to the number of arguments supplied to the program.
 * @argv: an array of character pointers listing all the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = add_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_bytes = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || read_bytes == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_bytes = write(file_to, buffer, read_bytes);
		if (file_to == -1 || write_bytes == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_bytes = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);
	free(buffer);
	fileclose(file_from);
	fileclose(file_to);
	return (0);
}
