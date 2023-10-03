#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#define LEN 1024
/**
 * err_hand - handles all the error cases using variadic functions
 * @casenum: the error code we exit with
 * Return: (void)
 */
void err_hand(int casenum, ...)
{
	va_list arg_list;

	va_start(arg_list, casenum);
	if (casenum == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (casenum == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(arg_list, char *));
		exit(98);
	}
	else if (casenum == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(arg_list, char *));
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		dprintf(STDERR_FILENO, "%d\n", va_arg(arg_list, int));
		exit(100);
	}
	va_end(arg_list);
}
/**
 * main - copies the contents of the first file to the second
 * @argc: argument count
 * @argv: the vector to the given arguments
 * Return: (0) upon success
 */
int main(int argc, char **argv)
{
	int filesrc, filedest, writec, readc, closec;
	char *buffer;

	if (argc != 3)
		err_hand(97);
	if (argv[1] == 0)
		err_hand(98, argv[1]);
	if (argv[2] == 0)
		err_hand(99, argv[2]);
	filesrc = open(argv[1], O_RDONLY);
	if (filesrc == -1)
		err_hand(98, argv[1]);
	filedest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (filedest == -1)
		err_hand(99, argv[2]);
	buffer = malloc(LEN * sizeof(char));
	if (buffer == 0)
		return (1);
	readc = read(filesrc, buffer, LEN);
	if (readc == -1)
		err_hand(98, argv[1]);
	while (readc > 0)
	{
		writec = write(filedest, buffer, readc);
		if (writec == -1)
			err_hand(99, argv[2]);
		readc = read(filesrc, buffer, LEN);
		if (readc == -1)
			err_hand(98, argv[1]);
	}
	closec = close(filesrc);
	if (closec == -1)
		err_hand(105, filesrc);
	closec = close(filedest);
	if (closec == -1)
		err_hand(105, filedest);
	free(buffer);
	return (0);
}
