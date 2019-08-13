#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *copy_textfile(char *filename, char *filecopy, int letters);
int create_copyfile(const char *filename, char *text_content);
int append_text_to_copyfile(const char *filename, char *text_content);

#endif /*HOLBERTON_H*/
