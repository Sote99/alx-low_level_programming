#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: filename
 * @letters: num of letters printed
 * Return: num of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ib;
	ssize_t d, r;
	char *buff;

	if (!filename)
		return (0);

	ib = open(filename, O_RDONLY);

	if (ib == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	d = read(ib, buff, letters);
	r = write(STDOUT_FILENO, buff, d);

	close(ib);
	free(buff);

	return (r);
}
