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

	if (!filedesc)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
	{
		close(filedesc);
		return (0);
	}
	if (read(filedesc, buffer, letters) != letters)
	{
		close(filedesc);
		return (0);
	}
	count = strlen(buffer);
	write(1, buffer, count);
	free(buffer);
	return (count);
}
