#include "main.h"
#include <stdio.h>

/**
 * times_table - main function
 * Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j == 9)
			{
				result = i * j;
				printf("%2d", result);
			}
			else
			{
				result = i * j;
				printf("%2d, ", result);
			}
		}
		printf("\n");
	}
}
