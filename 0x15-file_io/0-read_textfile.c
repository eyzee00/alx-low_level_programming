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
	int filedesc;
	int readc, writec;
	char *buffer;

	if (letters == 0)
		return (0);
	buffer = malloc(letters);
	if (filename == NULL)
		return (0);
	filedesc = open(filename, O_RDONLY);
	if (filedesc < 0)
		return (0);
	readc = read(filedesc, buffer, letters);
	if (readc < 0)
		return (0);
	writec = write(1, buffer, readc);
	if (writec < 0)
		return (0);
	if (close(filedesc) < 0)
		return (0);
	free(buffer);
	return (readc);
}
