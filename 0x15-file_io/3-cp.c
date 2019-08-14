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
	int bytes = 1024, lenRead = 1, lenWrite, checkClose, f1, f2;
	char buffer[1024];

	if (argc != 3)
		exit(97);
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	while (lenRead)
	{
		lenRead = read(f1, buffer, bytes);
		if (lenRead == -1)
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
	checkClose = close(f1);
	if (checkClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	checkClose = close(f2);
	if (checkClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
