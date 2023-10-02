#include "main.h"
/**
 * create_file - creates a file and sets its permissions to rw-------
 * @filename: the name of the file
 * @text_content: the content to be wrtitten in the file
 * Return: (1) on success, otherwise (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc = 0;

	if (filename == NULL)
		return (-1);
	filedesc = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	if (filedesc < 0)
		return (-1);
	if (text_content != NULL)
		write(filedesc, text_content, strlen(text_content));
	if (close(filedesc) < 0)
		return (-1);
	return (1);
}
