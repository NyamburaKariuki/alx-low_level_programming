#include "main.h"
/**
  *create_file - function to create a file
  *@filename: file to create
  *@text_content: string to write
  *Return: Always 0 (Success)
  */

int create_file(const char *filename, char *text_content)
{
	int file_des;
	int result;

	if (filename == NULL)
	{
		return (-1);
	}
	 file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
		result = write(file_des, text_content, _strlen(text_content));
	if (result == -1)
	{
		close(file_des);
		return (-1);
	}
	}
	close(file_des);
	return (1);
}

/**
  *_strlen - function to get the length of a string
  *@s: string
  *Return: Always 0 (Success)
  */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;
	return (len);
}
