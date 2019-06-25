#include "holberton.h"

/*
 * print_alphabet - prints out the alphabet
 * main - uses built in function
 * add comment
 * return 0 if succesful
 */

void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
}

int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
