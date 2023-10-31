#include "main.h"

/**
 * error_file - prints an error message
 * @file_from: file from which text is copied
 * @file_to: file to which text is copied
 * @argv: pointer to character
 * Return: if the number of argument is not the correct one, exit with code
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: pointer to character
 * Return: if you can not create or if write files, exit with code
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int err_close;
	ssize_t nchars, apx;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buff, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		apx = write(file_to, buff, 1024);
		if (apx == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_to);
		exit(100);
	}
	return (0);
}
