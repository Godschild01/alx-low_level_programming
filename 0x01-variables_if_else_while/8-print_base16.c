#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */

int main() 
  {
    char digit = '0';
    while (digit <= '9') {
        putchar(digit);
        digit++;
    }
    
    digit = 'a';
    while (digit <= 'f') {
        putchar(digit);
        digit++;
    }
    
    putchar('\n');
    
    return 0;
} 

