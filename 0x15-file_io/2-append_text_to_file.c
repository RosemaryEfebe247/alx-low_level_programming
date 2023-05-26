#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - To append text to file
 * @filename: The name of the file
 * @text_content: The content to append to the file
 * Return: 1 on success and -1 of failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; )
			len++;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
