#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the file name
 * @letters: number of letter to read
 * Return: the actual number of letters it could read and print
 * 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, w;
	char *s;

	s = malloc(sizeof(*filename) * (letters + 1));
	if (filename == NULL || s == NULL)
	{
		free(s);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	size = read(fd, s, letters);
	if (size == -1)
		return (0);
	s[size] = '\n';
	w = write(STDOUT_FILENO, s, size);
	if (w != size)
		return (0);
	free(s);
	close(fd);
	return (size);
}
