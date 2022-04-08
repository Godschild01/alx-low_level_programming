#include <stdio.h>

/**
 *main - print to standard output
 *Return: 0 if exited, compiled without error
*/
int main(void)
{
char c;
int i;
long i;
double d;
float f;
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d bytes(s)\n", sizeof(float));
return(0);
}
