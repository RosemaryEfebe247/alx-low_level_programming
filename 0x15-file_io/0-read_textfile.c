#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - Read the text from the file
 * @filename: The pointer to the file
 * @letters: The number of letters to read and print
 * Return: The letters or error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		return (0);
	}
	wd = write(STDOUT_FILENO, buff, rd);
	if (wd == -1)
	{
		return (0);
	}
	close(fd);
	free(buff);
	return (wd);
}
