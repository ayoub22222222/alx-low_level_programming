#include "main.h"
/**
 * append_text_to_file - function that append a a text into a file
 * @filename: poiter to the name of the file
 * @text_content: piner to the text content
 * Return: return 1 if the file is exist otherwise return -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		write = write(file, text_content, len);

		if (write == -1)
			return (-1);
	}

	close(file);
	return (1);
}
