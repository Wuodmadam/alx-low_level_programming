#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int kq;
	int d, y;
	char *jer;
	if (!filename)
		return (0);
	kq = open(filename, O_RDONLY);
	if (kq < 0)
		return (0);
	jer = malloc(sizeof(char) * letters);
	if (!jer)
		return (0);
	d = read(kq, jer, letters);
	if (d < 0)
	{
		free(jer);
		return (0);
	}
	jer[d] = '\0';
	close(kq);
	y = write(STDOUT_FILENO, jer, d;)
	if (y < 0)
	{
		free(jer);
		return (0);
	}
	free(jer);
	return (y);
}
