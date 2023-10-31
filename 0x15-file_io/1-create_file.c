#include "main.h"
/**
 * create_file - function that create a file
 * @filename: the name of the file as a parametters
 * @text_content: character pointer to a text input
 * Return: create a new file
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	int len;
	int wr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(file, text_content, len);
		if (wr < 0)
			return (-1);
	}
	close(file);
	return (1);
}
