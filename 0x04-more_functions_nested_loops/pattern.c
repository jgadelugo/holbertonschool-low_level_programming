#include <stdio.h>
#include "holberton.h"

int pattern(int n)
{
    //int n = 9; //6 , 5
    int i, x, y , k, t;
    k = 0;
    t = n / 2;
    
    for (i = 0; i < n; i++)
    {
        if (i < n/2)
        {
            for (y = 0; y < k; y++)
                putchar('.');
        }
        else if (i >= n/2)
        {
            if (i == n/2 && n % 2 != 0)
                t++;
            for (x = 1; x < t; x++)
                putchar('.');
            t--;
        }
        if ( n % 2 != 0)
        {
            if ((n / 2) > i)
                putchar('\\');
            else if ((n / 2) == i )
                putchar('|');
            else
                putchar('/');
        }
        else if ((n / 2) > i)
            putchar('\\');
        else
            putchar('/');
        putchar('\n');
        k++;
    }
    return 0;
}
