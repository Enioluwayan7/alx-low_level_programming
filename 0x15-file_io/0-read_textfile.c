#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: Text file read.
 * @letters: number of letters it should read and print.
 *
 * return: if the file can not be opened or read, return 0.
 * if filename is NULL return 0.
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *doc;
	ssize_t fp;
	ssize_t r;
	ssize_t w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	doc = malloc(sizeof(char) * letters);
	r = read(fp, doc, letters);
	w = write(STDOUT_FILENO, doc, r);

	free(doc);
	close(fp);
	return (w);
}

