#include "holberton.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success,
 * (A) -1 on failure: (file can not be created...
 * ...file can not be written, write “fails”, etc…)
 * (B) if filename is NULL return -1
 *  Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 *
 * Other requirements:
 * Do not create the file if it does not exist
 * If text_content is NULL, do not add anything to the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, len;

	/* Return condition (B) */
	if (filename == NULL)
		return (-1);

	/* open(const char *path, int oflag, ...) */
	filedes = open(filename, O_RDWR | O_APPEND);

	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}

	len = strlen(text_content);
	/* write(int fildes, const void *buf, size_t nbyte); */
	write(filedes, text_content, len);

	close(filedes);

	/* Return condition (A) */
	if (filedes == -1)
		return (-1);

	return (1);
}
