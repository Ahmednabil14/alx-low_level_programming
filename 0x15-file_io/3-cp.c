#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd1, r, w, fd2, fd1_close, fd2_close;
	char s[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to/n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	r = read(fd1, s, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	w = write(fd2, s, 1024);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	fd1_close = close(fd1);
	fd2_close = close(fd2);
	if (fd1_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (fd2_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
