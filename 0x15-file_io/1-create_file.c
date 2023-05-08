#include "main.h"

/**
 * create_file - creates a file with the given filename and writes the
 *					specified text content to the file.
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	size_t len;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		for (len = 0; text_content[len] != '\0'; len++)
			continue;

		w = write(file_desc, text_content, len);
		if (w == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
