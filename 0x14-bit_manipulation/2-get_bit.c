#include "holberton.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: unsigned long int to search
  * @index: index to return bit
  * Return: the value of the bit at index or -1 if error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
