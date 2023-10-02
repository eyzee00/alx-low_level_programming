#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to the screen
 * @filename: the name of the file
 * @letters: how many characters (bytes) to read from the file
 * Return: (0) if file can't be open or read, also if filename
 * is NULL or if write fails, otherwise the number of letters
 * read and printed to the screen
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int filedesc = open(filename, O_RDWR), count;
	char *buffer;

	if (filedesc < 0)
		return (0);
	if (filename == NULL)
	{
		close(filedesc);
		return (0);
	}
	buffer = malloc(letters);
	if (!buffer)
	{
		close(filedesc);
		return (0);
	}
	count = read(filedesc, buffer, letters);
	if (count < 0)
	{
		free(buffer);
		close(filedesc);
		return (0);
	}
	if (write(1, buffer, count) < 0)
	{
		free(buffer);
		close(filedesc);
		return (0);
	}
	if (close(filedesc) < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (count);
}
