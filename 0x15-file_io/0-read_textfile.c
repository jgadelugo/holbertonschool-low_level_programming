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

	if ((buff = malloc(letters)) == NULL)
		return (0);

	of = open(filename, O_RDONLY);
	lRead = read(of, buff, letters);
	write(1, buff, lRead);

	free(buff);
	close(of);

	if(lRead > letters)
		return (0);
	return(lRead);
}
