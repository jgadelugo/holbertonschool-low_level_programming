#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - copy a file into another file (cp command)
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0 if succesfull
  */

int main(int argc, char **argv)
{
	int bytes = 1024, f1, f2;
	ssize_t lenRead = 1, lenWrite;
	char buffer[1024];

	if (argc != 3)
		exit(97);
	while ((f1 = open(argv[1], O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	while ((f2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	while (lenRead)
	{
		while ((lenRead = read(f1, buffer, bytes)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		lenWrite = write(f2, buffer, lenRead);
		if (lenWrite == -1 || lenWrite != lenRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
