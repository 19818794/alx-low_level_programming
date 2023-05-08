#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success,
 * or -1 on failure (filename is NULL, file can not be created,
 * file can not be written, write “fails”, etc…).
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content,
				strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
