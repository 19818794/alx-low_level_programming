#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure (filename is NULL, or the file
 * does not exist or if you do not have the required permissions to write
 * the file).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
