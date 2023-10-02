#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: Bs- actual number of byte read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t Qr;
	ssize_t Bs;
	ssize_t L;

	Qr = open(filename, O_RDONLY);
	if (Qr == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	L = read(Qr, buf, letters);
	Bs = write(STDOUT_FILENO, buf, L);

	free(buf);
	close(Qr);
	return (Bs);
}
