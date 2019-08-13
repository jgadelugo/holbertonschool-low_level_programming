#include "holberton.h"
#include <stdlib.h>
/**
  * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: file to read
  * @letters: number of letters it should read and print
  * Return: number of letters it could read and print or 0 if fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int of;
	size_t lRead;

	if (!filename)
		return (0);
	buff = malloc(letters);
	if (!buff)
		return (0);
	/* open file */
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		free(buff);
		return (0);
	}
	/* read file up to "letters" amount of charachters */
	lRead = read(of, buff, letters);
	if (lRead < 1)
	{
		free(buff);
		close(of);
		return (0);
	}
	/* write content read */
	write(1, buff, lRead);

	free(buff);
	close(of);

	return (lRead);
}
