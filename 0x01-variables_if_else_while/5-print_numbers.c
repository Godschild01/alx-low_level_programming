#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */

int main() 
{
    int digit = 0;
    while (digit < 10) {
        putchar('0' + digit);
        digit++;
    }
    
    putchar('\n');
    retunr(0);
}
  
