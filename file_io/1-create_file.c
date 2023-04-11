#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content writed in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)

	wr = write(fd, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
