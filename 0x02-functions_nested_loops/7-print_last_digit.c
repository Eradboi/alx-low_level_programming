#include "main.h"

/**
 * print_last_digit - function prints the last number of any int
 * @num: input number
 * Return: ans
 */

int print_last_digit(int num)
{
	int ans = num % 10;

	if (num < 0)
		ans = -ans;
	_putchar(ans + '0');
	return (ans);
}
