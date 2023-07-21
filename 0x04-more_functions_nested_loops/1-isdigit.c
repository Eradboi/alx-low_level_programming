#include "main.h"

/**
 * _isdigit - function that checks through 0 and 9
 * @c: parameter has to be checked
 * Return: 1 on sucess and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
