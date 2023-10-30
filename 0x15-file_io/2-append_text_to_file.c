#include "main.h"
/**
 * append_text_to_file - add text to file
 * @filename: name of the file to add text to
 * @text_content: Content
 *
 * Return: 1 on success, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ib;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	ib = open(filename, O_WRONLY | O_APPEND);

		if (ib == -1)
			return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(ib, text_content, letters);

		if (rwr == -1)
			return (-1);
	}
	close(ib);

	return (1);
}
