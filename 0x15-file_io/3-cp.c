#include "main.h"

/**
 * main - Entry point.
 * @argc: the number of arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Description: copies the content of a file to another file.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to, *buffer;
	int f_from, f_to, bytes_read, bytes_written;

	if (argc != 3)
		_display_error_p("Usage: %s file_from file_to\n", "cp", 97);
	file_from = argv[1];
	file_to = argv[2];
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		free(buffer);
		_display_error_p("Error: Can't read from file %s\n",
				file_from, 98);
	}
	f_from = open(file_from, O_RDONLY);
	f_to = open(file_to, O_WRONLY | O_CREAT |
		O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	do {
		if (f_from == -1)
			free(buffer), _display_error_p(
			"Error: Can't read from file %s\n", file_from, 98);
		bytes_read = read(f_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			free(buffer), _close_error(f_from, buffer),
			_display_error_p(
			"Error: Can't read from file %s\n", file_from, 98);
		if (f_to == -1)
			free(buffer), _close_error(f_from, buffer),
			_display_error_p(
			"Error: Can't write to %s\n", file_to, 99);
		bytes_written = write(f_to, buffer, bytes_read);
		if (bytes_written == -1)
			free(buffer), _close_error(f_to, buffer),
			_close_error(f_from, buffer), _display_error_p(
			"Error: Can't write to %s\n", file_to, 99);
		f_to = open(file_to, O_WRONLY | O_APPEND);
	} while (bytes_read > 0);
	_close_error(f_from, buffer), _close_error(f_to, buffer), free(buffer);
	return (0);
}

/**
 * _display_error_p - displays error messsage and exits with a code.
 * @message: error message.
 * @var: argument of the error message string.
 * @n: exit code.
 *
 * Return: void.
 */
void _display_error_p(char *message, char *var, int n)
{
	dprintf(STDERR_FILENO, message, var);
	exit(n);
}

/**
 * _display_error_i - displays error messsage and exits with a code.
 * @message: error message.
 * @var: argument of the error message string.
 * @n: exit code.
 *
 * Return: void.
 */
void _display_error_i(char *message, int var, int n)
{
	dprintf(STDERR_FILENO, message, var);
	exit(n);
}

/**
 * _close_error - closes the file, or displays error messsage and exits
 * with a code if it fails.
 * @var: argument to close.
 * @buffer: unused buffer to freed.
 *
 * Return: void.
 */
void _close_error(int var, char *buffer)
{
	if (close(var) == -1)
	{
		free(buffer);
		_display_error_i("Error: Can't close fd %d\n", var, 100);
	}
}
