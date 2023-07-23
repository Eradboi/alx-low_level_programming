#include "main.h"

/**
 * print_sign - function prints sign
 * @n: integer input
 * Return: int c
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
