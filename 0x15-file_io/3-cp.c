#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1024
/**
 * argcount_err - handles the case when the number of arguments is
 * invalid
 * Return: void
 */
void argcount_err(void)
{
	dprintf(1, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * open_read_err - handles the case when reading or opening the given
 * source file fails
 * @filename: the name of the file
 * Return: void
 */
void open_read_err(char *filename)
{
	dprintf(1, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * create_write_err - handles the case when creating or writting to
 * the given source file fails
 * @filename: the name of the file
 * Return: void
 */
void create_write_err(char *filename)
{
	dprintf(1, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
 * close_err - handles the case when closing the given file fails
 * @filedesc: the name of the file
 * Return: void
 */
void close_err(int filedesc)
{
	dprintf(1, "Error: can't close fd %d\n", filedesc);
	exit(100);
}
/**
 * main - copies the contents of the first file to the second
 * @argc: Argument Count
 * @argv: the vector to the given arguments
 * Return: (0) if succesful
 */
int main(int argc, char **argv)
{
	int filesrc, filedest, writec, readc, closec;
	char buffer[LEN];
	mode_t permis = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		argcount_err();
	if (argv[1] == 0)
		open_read_err(argv[1]);
	if (argv[2] == 0)
		create_write_err(argv[2]);
	filesrc = open(argv[1], O_RDONLY);
	if (filesrc < 0)
		open_read_err(argv[1]);
	filedest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permis);
	if (filedest < 0)
		create_write_err(argv[2]);
	readc = read(filesrc, buffer, LEN);
	if (readc < 0)
		open_read_err(argv[1]);
	while (readc == LEN)
	{
		writec = write(filedest, buffer, readc);
		if (writec < 0 || writec != readc)
			create_write_err(argv[2]);
		readc = read(filesrc, buffer, LEN);
		if (readc < 0)
			open_read_err(argv[1]);
	}
	closec = close(filesrc);
	if (closec < 0)
		close_err(filesrc);
	closec = close(filedest);
	if (closec < 0)
		close_err(filedest);
	return (0);
}
