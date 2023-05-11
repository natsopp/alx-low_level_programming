#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: text file to read
 * @letters: number of letters it should read and print
 * Return: actual no of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	char buf [READ_BUF_SIZE * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILEND, &buf[0], bytes);
	close(fd);
        return (bytes);
}
