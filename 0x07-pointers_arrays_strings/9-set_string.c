#include "holberton.h"
void set_string(char **s, char *to);
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: value to overide
 * @to: value to copy
 */
void set_string(char **s, char *to)
{
	*s = to;
}
