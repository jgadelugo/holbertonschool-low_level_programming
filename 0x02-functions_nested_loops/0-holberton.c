#include "holberton.h"

/*
 * main - print holberton
 * add comment
 * return 0 if succesful
 */
int main(void)
{
char h[10] = "Holberton\n";
 
 for (int i = 0; i < sizeof(h); i++)
_putchar(h[i]);

return (0);
}
