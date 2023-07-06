#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters:  the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int cont;
        ssize_t numb_r, numb_w;
        char *buff;

        buff = malloc(sizeof(char) * letters);
        if (!buff)
                return (0);

        cont = open(filename, O_RDONLY);
        if (!filename || cont == -1)
                return (0);

        numb_r = read(cont, buff, letters);
        if (numb_r == -1)
                return (0);

        numb_w = write(STDOUT_FILENO, buff, numb_r);
        free(buff);
        close(cont);

        return ((numb_w == -1 || numb_w != numb_r) ? 0 : numb_w);
