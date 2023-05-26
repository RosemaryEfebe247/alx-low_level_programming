#include "main.h"
#include <stdio.h>
/**
 * create_file - Function to create a file
 * @filename: The name of the file to create
 * @text_content: The strint to write to filename(the fiile)
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; )
			len++;
		wr = write(fd, text_content, len);
	}
	if (wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
