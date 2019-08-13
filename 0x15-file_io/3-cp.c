#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * copy_textfile - reads file if succesfull copies content up to filecopy
  * @filename: file to read
  * @filecopy: file to copy
  * @letters: nth place
  * Return: content of file up to nth place
  */
char *copy_textfile(char *filename, char *filecopy, int letters)
{
	char *buff;
	int of, check_size = 1, lRead, check_created = 0, check_a;

	if (!filename || !letters)
		return (NULL);
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(98);
	}
	buff = malloc(letters);
	if (!buff)
		return (NULL);
	while (check_size)
	{
		lRead = read(of, buff, letters);
		if (lRead == -1)
		{
			free(buff);
			close(of);
			return (NULL);
		}
		if (check_created)
			check_a = append_text_to_copyfile(filecopy, buff);
		if (!check_created)
		{
			check_a = create_copyfile(filecopy, buff);
			check_created = 1;
		}
		if (lRead < letters)
			check_size = 1;
		if (check_a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", filecopy);
			exit(99);
		}
	}
	close(of);
	return (buff);
}

/**
 * create_copyfile - creates a file or truncates it
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on succes, -1 on failue
 */

int create_copyfile(const char *filename, char *text_content)
{
	int file, len = 0, check = 0;

	if (!filename)
		return (-1);

	/* creates file or truncates a file, and give it permission -rw------ */
	file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (file == -1)
		return (-1);

	/* if text, writes text into file */
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		check = write(file, text_content, len);
	}
	/* closes file */
	close(file);
	if (check != len)
		return (-1);

	return (1);
}

/**
 * append_text_to_copyfile - append to a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to write to file
 * Return: 1 on succes, -1 on failure
 */

int append_text_to_copyfile(const char *filename, char *text_content)
{
	int file, len;

	if (!filename)
		return (-1);

	/* Append to a file */
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	/* if text, writes text into file */
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		write(file, text_content, len);
	}
	/* closes file */
	close(file);

	return (1);
}


/**
  * main - cp function
  * @argc: number of arguments passed
  * @argv: arguments
  * Return: 0 if succesful
  */
int main(int argc, char **argv)
{
	int buffsize = 1024;

	if (argc != 3)
		exit(97);
	copy_textfile(argv[1], argv[2], buffsize);

	return (0);
}
