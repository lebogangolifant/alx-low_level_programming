#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @num_letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t num_read;
	char *buffer;
	size_t i;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(buffer);
		return (0);
	}

	num_read = read(file_desc, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	for (i = 0; i < (size_t)num_read; i++)
	{
		if (write(STDOUT_FILENO, &buffer[i], 1) != 1)
		{
			free(buffer);
			close(file_desc);
			return (0);
		}
	}

	free(buffer);
	close(file_desc);
	return (num_read);
}

