#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: string to be counted
 * Return: length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
