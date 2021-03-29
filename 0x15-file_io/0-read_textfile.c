#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read from
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print.
 * 			(A) if the file can not be opened or read, return 0
 * 			(B) if filename is NULL return 0
 *			(C) if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc, bytes_read, bytes_written;
	char *buf;

	buf = malloc(letters * sizeof(char));

	filedesc = open(filename, O_RDONLY); /* open(const char *path, int oflag, ...);	mode_t mode argument only required if oflag is O_CREAT */

	/* Return condition (A) */
	if (filedesc == -1)
		return (0);
	
	/* Return condition (B) */
	if (filename == NULL)
		return (0);

	bytes_read = read(filedesc, buf, letters); /* read(int fildes, void *buf, size_t nbyte); */

	bytes_written = write(STDOUT_FILENO, buf, bytes_read); /* write(int fildes, const void *buf, size_t nbyte); */

	/* Return conditons (C) */
	if (bytes_read != bytes_written || bytes_written == -1)
		return (0);

	close(filedesc);

	return (bytes_written);
}
