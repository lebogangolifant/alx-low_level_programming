#include "main.h"

/**
 * handle_error - prints an error message and exits the program with a given
 *								exit code
 * @exit_code: the exit code to use when exiting the program
 * @message: the error message to print
 *
 * Return: void
 */

void handle_error(int exit_code, const char *message, ...)
{
	va_list args;

	va_start(args, message);
	dprintf(STDERR_FILENO, message, args);
	va_end(args);
	exit(exit_code);
}

/**
 * open_file - opens a file and returns a file descriptor
 * @filename: the name of the file to open
 * @flags: the flags to use when opening the file
 * @mode: the permissions to use when creating the file (if applicable)
 *
 * Return: the file descriptor of the opened file
 */

int open_file(const char *filename, int flags, mode_t mode)
{
	int file_desc;

	file_desc = open(filename, flags, mode);
	if (file_desc == -1)
		handle_error(98, "Error: Can't read from file %s\n", filename);
	return (file_desc);
}

/**
 * copy_file - copies the contents of one file to another
 * @file_from: the file to copy from
 * @file_to: the file to copy to
 *
 * Return: void
 */

void copy_file(const char *file_from, const char *file_to)
{
	int file_desc_from, file_desc_to, read_result, write_result;
	char buffer[1024];
	int i;

	file_desc_from = open_file(file_from, O_RDONLY, 0);
	file_desc_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_result = read(file_desc_from, buffer, 1024)) > 0)
	{
		for (i = 0; i < read_result; i++)
		{
			write_result = write(file_desc_to, &buffer[i], 1);
			if (write_result == -1)
				handle_error(99, "Error: Can't write to %s\n",
						file_to);
		}
	}
	if (read_result == -1)
		handle_error(98, "Error: Can't read from file %s\n",
				file_from);
	if (close(file_desc_from) == -1)
		handle_error(100, "Error: Can't close fd %d\n",
				file_desc_from);
	if (close(file_desc_to) == -1)
		handle_error(100, "Error: Can't close fd %d\n", file_desc_to);
}

/**
 * main - entry point for the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		handle_error(97, "Usage: cp file_from file_to\n");
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
