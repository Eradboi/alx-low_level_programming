#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int firstDigit1 = i / 10;
			int secondDigit1 = i % 10;
			int firstDigit2 = j / 10;
			int secondDigit2 = j % 10;

			putchar(firstDigit1 + '0');
			putchar(secondDigit1 + '0');
			putchar(' ');
			putchar(firstDigit2 + '0');
			putchar(secondDigit2 + '0');
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
