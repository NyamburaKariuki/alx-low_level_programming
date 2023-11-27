#include "main.h"
/**
 *append_text_to_file - function to append text
 *@filename: file to create
 *@text_content: text to aapend
 *Return: Always 0 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{	int file_des;
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}
	file_des = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		wr = write(file_des, text_content, _strlen(text_content));
		if (wr == -1)
		return (-1);

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
