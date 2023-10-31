#include "main.h"

/**
 * read_textfile - reads a text file and show the number of letters
 * @filename: filename - string pointer
 * @letters: shows number of letters printed
 * Return: the actual number of letters it could read and print
 *	0- if the file can not be opened or read
 *	0- if filename is NULL
 *	0- if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if  (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);
	return (nwr);
}
