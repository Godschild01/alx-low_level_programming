#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int k)
{
	unsigned int n1;

	n1 = k;

	if (k < 0)
	{
		_putchar('-');
		n1 = -k;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

