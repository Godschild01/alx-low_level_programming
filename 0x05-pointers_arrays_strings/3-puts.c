#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str) 
{
    while (*str != '\0') 
{
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main() 
{
    char myString[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(myString);
    return 0;

}
