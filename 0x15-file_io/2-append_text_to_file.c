#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file worked on
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success (file exist) and -1 on failure (file not exist)
 *	If filename is NULL return -1
 *	If text_content is NULL, do not add anything to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, apx, bcd;

	if (!filename)
		return (0);
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	if (text_content)
	{
		for (apx = 0; text_content[apx]; apx++)
			;
		bcd = write(fd, text_content, apx);

		if (bcd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
