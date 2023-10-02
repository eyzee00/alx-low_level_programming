#include "main.h"
/**
 * append_text_to_file - creates a file and sets its permissions to rw-------
 * @filename: the name of the file
 * @text_content: the content to be wrtitten in the file
 * Return: (1) on success, otherwise (-1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedesc = 0, writec;

	if (filename == NULL)
		return (-1);
	filedesc = open(filename, O_WRONLY | O_APPEND);
	if (filedesc < 0)
		return (-1);
	if (text_content != NULL)
	{
		writec = write(filedesc, text_content, strlen(text_content));
		if (writec < 0)
			return (-1);
	}
	if (close(filedesc) < 0)
		return (-1);
	return (1);
}
