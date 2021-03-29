#include "holberton.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success,
 * (A) -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
 * (B) if filename is NULL return -1
 *
 * Other requirements:
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, len, btyes_written;

	/* Return condition (B) */
	if (filename == NULL)
		return (-1);

	/* open(const char *path, int oflag, mode_t mode) */
	filedes = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}

	len = strlen(text_content);
	/* write(int fildes, const void *buf, size_t nbyte); */
	btyes_written = write(filedes, text_content, len);

	close(filedes);

	/* Return condition (A) */
	if (filedes == -1 || btyes_written == -1 || close(filedes) == -1)
		return (-1);

	return (1);
}
