#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: character that is checked
 * Return: if uppercase returns 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
