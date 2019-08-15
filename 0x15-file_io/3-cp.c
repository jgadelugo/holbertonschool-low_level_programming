#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_text_file - copies one file to the other (cp function)
 * @f1: opened file1 (file to copy)
 * @f2: opened file2 (new copy)
 * @file1: name of file1
 * @file2: name of file2
 */

void copy_text_file(int f1, int f2, char *file1, char *file2)
{
	ssize_t lenRead = 1, lenWrite = 1;
	char buffer[1024];

	while (lenRead)
	{
		lenRead = read(f1, buffer, sizeof(buffer));
		if (lenRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
			close(f1);
			close(f2);
			exit(98);
		}
		lenWrite = write(f2, buffer, lenRead);
		if (lenWrite == -1 || lenWrite != lenRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			close(f1);
			close(f2);
			exit(99);
		}
	}
}

/**
  * main - copy a file into another file (cp command)
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0 if succesfull
  */

int main(int argc, char **argv)
{
	int f1, f2;

	if (argc != 3)
		exit(97);

	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (f2 == -1)
		f2 = open(argv[2], O_TRUNC | O_WRONLY);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		close(f1);
		exit(98);
	}

	copy_text_file(f1, f2, argv[1], argv[2]);

	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		close(f2);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
